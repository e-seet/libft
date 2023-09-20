/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:23:51 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:23:53 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
void	del(void *content)
{
	free(content);
}
*/

// parameter
// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.

//description
// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*curr;
	t_list	*head;

	head = *lst;
	curr = *lst;
	if (!head || !del)
		return ;
	else
	{
		while (curr -> next != NULL)
		{
			prev = curr;
			curr = curr -> next;
			del(prev);
		}
		del(curr);
		head = curr;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
    new -> next = temp;
    *lst = new;
}
t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = (void *) content;
	node->next = NULL;
	return (node);
}
void displayList(t_list *lst) {
    t_list *current = lst;
    while (current != NULL) {
        printf("node->%s\n", (char *)current->content);
        current = current->next;
    }
}
int main()
{

	 // Test ft_lstadd_front
    t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Front"));
    ft_lstadd_front(&list, ft_lstnew("NewFront"));
    ft_lstadd_front(&list, ft_lstnew("NewFront3"));
    displayList(list);
	printf("lstclear  \n\n");
    // Test ft_lstclear
    ft_lstclear(&list, del);
    printf("ft_lstclear Test: %p\n", list); // Expected output: NULL
	printf("ft_lstclear Test: %s\n", (char *)list); // Expected output: NULL
	return 0;
}
*/
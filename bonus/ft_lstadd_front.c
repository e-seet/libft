/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:59:19 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 18:59:20 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//to comment out when testing individual file
/*#include <stdio.h>
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;*/

//paremeter
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.

// new is the node, lst is the linked list
// making node as the head and point to lined list

#include "../libft.h"
// setting new as the head of the linked list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	new -> next = temp;
	*lst = new;
}

/*#include <stdlib.h>
#include <stdio.h>

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

// Function to display the content of a linked list
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
	printf("ft_lstadd_front Test:\n");
	displayList(list); // Expected output: "NewFront -> Front -> NULL"

	return 0;
}*/
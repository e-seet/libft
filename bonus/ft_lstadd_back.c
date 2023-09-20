/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:16:21 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:16:22 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list; */

// parameter
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.

#include "../libft.h"
// add node to the back
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	curr = *lst;
	if (curr == NULL && new == NULL)
		return ;
	else if (curr == NULL && new != NULL)
	{
		*lst = new;
	}
	else
	{
		while (curr -> next != NULL)
		{
			curr = curr -> next;
		}
		curr -> next = new;
	}
}

/*
#include <stdlib.h>
#include <stdio.h>
void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
    new -> next = temp;
    *lst = new;
}

// Function to display the content of a linked list
void displayList(t_list *lst) {
    t_list *current = lst;
    while (current != NULL) {
        printf("node-> %s \n", (char *)current->content);
        current = current->next;
    }
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
int main()
{
	
	t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Front"));
    ft_lstadd_front(&list, ft_lstnew("NewFront"));
  
    ft_lstadd_back(&list, ft_lstnew("Back"));
    displayList(list); 
	return 0;
}
*/
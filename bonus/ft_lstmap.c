/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:28:02 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:28:03 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// parameter
// lst: The address of a pointer to a node.

// f: The address of the function used to iterate on
// the list.

// del: The address of the function used to delete
// the content of a node if needed.

// //return
// The new list. NULL if the allocation fails.

// description
// 1. Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. 
// 2. Creates a new list resulting of the successive
// applications of the function ’f’. 
// 3.The ’del’ function is used to delete the content
// of a node if needed.

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *curr;
	t_list *newlist;
	
	curr = lst;
	newlist = NULL;
	while (curr -> next != NULL)
	{
		f(curr -> content);
		if (newlist == NULL)
			newlist = curr;
		else
		{
			newlist -> next = curr;
			newlist = newlist -> next;
		}
		curr = curr -> next;
	}
}
// format the current content
// check if newlist is null
// if newlist is null, set newlist to current
// else: set the new list to point to the curr W
// then move the newlist to the next it is pointing
// update and move the curr to where its pointing (next)
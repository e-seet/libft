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

#include "libft.h"

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
void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *prev;
	t_list *curr;

	curr = *lst;
	if (curr == NULL)
		return (NULL);
	else
	{
		while (curr -> next != NULL)
		{
			prev = curr;
			curr = curr -> next;
			del(prev -> content);
			free(prev);
		}
		del(curr -> content);
		free(curr);
		*lst = NULL;
	}
}
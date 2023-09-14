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

#include "libft.h"
// parameter
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.

// add node to the back
void ft_lstadd_back(t_list **lst, t_list *new)
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
		}
		prev -> next = new;
	}

}


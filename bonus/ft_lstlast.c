/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:13:26 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:13:27 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// parameter: lst: The beginning of the list
// return the last node
t_list *ft_lstlast(t_list *lst)
{
	t_list *prev;
	t_list *curr;

	curr = lst;
	if (curr == NULL)
		return (NULL);
	else
	{
		while (curr -> next != NULL)
		{
			prev = curr;
			curr = curr -> next;
		}
		return (prev);
	}
}

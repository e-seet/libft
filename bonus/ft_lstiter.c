/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:26:06 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:26:06 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include 		"libft.h"

// parameter
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.

// description
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *curr;
	
	curr = lst;
	while (curr -> next != NULL)
	{
		f(curr -> content);
		curr = curr -> next;
	}
	f(curr -> content);
}
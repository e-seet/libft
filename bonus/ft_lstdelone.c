/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:18:04 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:18:05 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

//parameter
// lst: The node to free.
// del: The address of the function used to delete
// the content.

// description
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst -> content);
	free(lst);
}

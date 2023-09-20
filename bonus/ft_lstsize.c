/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:09:43 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:09:44 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
*/

// parameter: lst: The beginning of the list.
// return: The length of the list

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	else
	{
		while (lst != NULL)
		{
			lst = lst -> next;
			i++;
		}
		return (i);
	}
}

/*
#include "stdio.h"
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
int main()
{
	 // Test ft_lstsize.

	 //test case 1:
    // t_list *list = NULL;

	//test case 2
 	t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("Front"));
    ft_lstadd_front(&list, ft_lstnew("NewFront"));
    ft_lstadd_front(&list, ft_lstnew("NewFront"));
    ft_lstadd_front(&list, ft_lstnew("NewFront"));
   
    int size = ft_lstsize(list);
    printf("ft_lstsize Test: %d\n", size); // Expected output: 2

	return 0;
}
*/

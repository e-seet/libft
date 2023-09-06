/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:34:35 by eseet             #+#    #+#             */
/*   Updated: 2023/09/06 15:34:36 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (n > i)
	{
		s[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <strings.h> 
#include <assert.h>

int main() { 
	// Test case 1: Basic usage 
	char buffer1[10] = "abcdefghi";
	ft_bzero(buffer1, sizeof(buffer1));
	for (int i = 0; i < (int)sizeof(buffer1); i++) {
		assert(buffer1[i] == '\0');
	}

	// Test case 2: Zeroing out part of a buffer
	char buffer2[10] = "abcdefghij";
	ft_bzero(buffer2, 5);
	for (int i = 0; i < 5; i++) {
		assert(buffer2[i] == '\0');
	}
	//this return size of buffer allocated and not the number of items
	// printf("%ld\n", sizeof(buffer2) );
	for (int i = 5; i < (int)sizeof(buffer2); i++) {
		assert(buffer2[i] == 'f' + (i - 5));
	} 

	// Test case 3: Zeroing out an empty buffer 
	char buffer3[0]; 
	ft_bzero(buffer3, 0); // Should not cause any issues 
	// You can't access buffer3 because it has zero size 
	printf("All test cases passed.\n"); 
	return 0; 
}
*/
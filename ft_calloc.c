/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:56:58 by eseet             #+#    #+#             */
/*   Updated: 2023/09/06 15:56:59 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(int nmemb, int size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else if (nmemb * size > 2147483647)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(nmemb * size);
		if (!ptr)
			return (NULL);
	}
	return (ptr);
}
/*
#include <stdio.h> 
#include <ctype.h> 
#include <assert.h> 

int main() { 

	// Test case 1: Allocate an array of integers
	// and verify the contents are initialized to zero. 

	size_t num_elements = 5; 
	int *arr = (int *)ft_calloc(num_elements, sizeof(int)); 

	if (arr == NULL) { 
		perror("Memory allocation failed"); 
		return 1; 
	}
	for (size_t i = 0; i < num_elements; i++) { 
		assert(arr[i] == 0); 
	} 

	// Test case 2: Allocate an array of characters 
and verify the contents are initialized to zero. 
	size_t num_chars = 10; 
	char *str = (char *)ft_calloc(num_chars, sizeof(char)); 
	if (str == NULL) { 
		perror("Memory allocation failed"); 
		return 1; 
	} 

	for (size_t i = 0; i < num_chars; i++) { 
		assert(str[i] == '\0'); 
	} 

	// Test case 3: Allocate an empty block (size zero) and ensure it's NULL. 
	void *empty_block = ft_calloc(0, 1); 
	assert(empty_block == NULL); 

	// Test case 4: Allocate a large block of memory and verify it's not NULL. 
	size_t large_size = 1 << 20; // 1 megabyte 
	void *large_memory = ft_calloc(large_size, 1); 
	assert(large_memory != NULL); 

	// Clean up allocated memory 
	free(arr); 
	free(str); 
	free(empty_block); 
	free(large_memory); 
	printf("All test cases passed.\n"); 
	return 0; 
}
*/
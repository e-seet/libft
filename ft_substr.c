/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:10:44 by eseet             #+#    #+#             */
/*   Updated: 2023/09/13 13:10:45 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// #include <stdlib.h>
// paramtere
// s:  The string from which to create the substring.
// start:  The start index of the substring in the
// string ’s’.
// len:  The maximum length of the substring.

//return
// The substring.
// NULL if the allocation fails.

//Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	str = (char *) s;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	char			*string;
	unsigned int	i;

	i = 0;
	string = (char *) s;
	if (string == NULL)
		return (NULL);
	if (ft_strlen(string) < start)
	{
		substring = (char *) malloc(sizeof(char) * 1);
		substring[0] = '\0';
		return (substring);
	}
	substring = (char *) malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	if (substring == NULL)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>

// Prototype for the ft_substr function
// char *ft_substr(char const *s, unsigned int start, size_t len);
int main() {
    // Test case 1: Valid substring within the string
    const char *input1 = "Hello, World!";
    char *result1 = ft_substr(input1, 7, 5);
    assert(strcmp(result1, "World") == 0);
    free(result1);

    // // Test case 2: Start index out of bounds, should return an empty string
    const char *input2 = "Hello, World!";
    char *result2 = ft_substr(input2, 20, 5);
	// printf("%s\n", result2);
	assert(strcmp(result2, "") == 0);
    free(result2);

    // // Test case 3: Length longer than the 
	//remaining string, should return "World!"
    const char *input3 = "Hello, World!";
    char *result3 = ft_substr(input3, 7, 20);
    assert(strcmp(result3, "World!") == 0);
    free(result3);

    // // Test case 4: NULL input string, should return NULL
    const char *input4 = NULL;
    char *result4 = ft_substr(input4, 0, 5);
    assert(result4 == NULL);

    printf("All test cases passed!\n");

    return 0;
}
*/

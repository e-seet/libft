/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:49:37 by eseet             #+#    #+#             */
/*   Updated: 2023/09/07 19:49:38 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strrchr() function returns a pointer to the last occurrence of
// the character c in the string s.

// The strchr() and strrchr() functions return a pointer to the matched
// character or NULL if the character is not found.

//The  terminating null byte is considered part of the string, so that
// if c is specified as '\0', these functions 
//return a pointer to the terminator.

// char *strrchr(const char *s, int c);
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char *) s;
	len = ft_strlen(s);
	str = str + len;
	while (len)
	{
		if (*str == c)
			return (str);
		len --;
		str --;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    // Test Case 1: Find the last occurrence of 'l' in a string
    //Last Occurrence of 'l' at position: 10
    const char *str1 = "Hello, World!";
    char searchChar1 = 'l';
    char *result1 = ft_strrchr(str1, searchChar1);
    if (result1 != NULL) {
        printf("Test Case 1: String: \"%s\",
        Last Occurrence of '%c' at position: %ld\n",
         str1, searchChar1, result1 - str1);
    } else {
        printf("Test Case 1: Character '%c' not found in the string \"%s\"\n",
        searchChar1, str1);
    }

    // Test Case 2: Find the last occurrence of 'o' in a string
    // Last Occurrence of 'o' at position: 8
    const char *str2 = "Hello, World!";
    char searchChar2 = 'o';
    char *result2 = ft_strrchr(str2, searchChar2);
    if (result2 != NULL) {
        printf("Test Case 2: String: \"%s\", 
        //Last Occurrence of '%c' at position: %ld\n", str2,
         searchChar2, result2 - str2);
    } else {
        printf("Test Case 2: Character '%c' not found in the string \"%s\"\n",
         searchChar2, str2);
    }

    // Test Case 3: Find the last occurrence of a character not in the string
    //Last Occurrence of 'o' at position: 8
    const char *str3 = "Hello, World!";
    char searchChar3 = 'x';
    char *result3 = ft_strrchr(str3, searchChar3);
    if (result3 != NULL) {
        printf("Test Case 3: String: \"%s\", Last Occurrence of '%c' at position:
         %ld\n", str3, 
        searchChar3, result3 - str3);
    } else {
        printf("Test Case 3: Character '%c' not found in the string \"%s\"\n",
         searchChar3, str3);
    }

    return 0;
}
*/

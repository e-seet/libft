/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:23:43 by eseet             #+#    #+#             */
/*   Updated: 2023/09/06 17:23:45 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the
//      bytes of the memory area pointed to by s are interpreted as unsigned char.

//  The  rawmemchr()  function is similar to memchr(): it assumes (i.e., the programmer knows for certain) that an instance of c lies
//      somewhere in the memory area starting at the location pointed to by s, and so performs an optimized search for c (i.e., no use of
//      a  count  argument to limit the range of the search).  If an instance of c is not found, the results are unpredictable.  The fol‐
//      lowing call is a fast means of locating a string's terminating null byte:

//returnN VALUE
//The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in  the  given
//memory area.


void	ft_memchr(const void *s, int c, int n)
{
	int i;
	const unsigned char *o = s;
	i = 0;

	while (n > i)
	{
		if (o[i] == c)
			return (o[i]);
		i++;
	}
}

 
#include <stdio.h> 
#include <string.h> 
#include <assert.h> 

int main() { 

    // Test case 1: Search for 'A' in a string 
    const char *str = "Hello, World!"; 
    char searchChar1 = 'A'; 
    const void *result1 = memchr(str, searchChar1, strlen(str)); 
    if (result1 != NULL) { 
        printf("'%c' found at position %ld in the string.\n", searchChar1, (char *)result1 - str); 
    } else { 
        printf("'%c' not found in the string.\n", searchChar1); 
    } 

    // Test case 2: Search for 'o' in a string 
    char searchChar2 = 'o'; 
    const void *result2 = memchr(str, searchChar2, strlen(str)); 
    if (result2 != NULL) { 
        printf("'%c' found at position %ld in the string.\n", searchChar2, (char *)result2 - str); 
    } else { 
        printf("'%c' not found in the string.\n", searchChar2); 
    } 

    // Test case 3: Search for 'X' in a string 
    char searchChar3 = 'X'; 
    const void *result3 = memchr(str, searchChar3, strlen(str)); 
    if (result3 != NULL) { 
        printf("'%c' found at position %ld in the string.\n", searchChar3, (char *)result3 - str); 
    } else { 
        printf("'%c' not found in the string.\n", searchChar3); 
    } 

    return 0; 
}

 

int main() { 

    const char *str = "Hello, World!"; 
    char searchChar = 'o'; 
    void *result = ft_memchr(str, searchChar, strlen(str)); 
    if (result != NULL) { 
        printf("'%c' found at position %ld in the string.\n", searchChar, (char *)result - str); 
    } else { 
        printf("'%c' not found in the string.\n", searchChar); 
    } 
    return 0; 
} 
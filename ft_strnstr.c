/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:59:57 by eseet             #+#    #+#             */
/*   Updated: 2023/09/07 19:59:58 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strnstr() function locates the first occurrence of the null-terminated
//  string little in the string big, where not more than len characters are searched.  

 // Characters that appear after a ‘\0’ character are not searched.
 // Since the strnstr() function is a FreeBSD specific API, 
 //it should only be used when portability is not a concern.

//If little is an empty string, big is returned;
//if little occurs nowhere in big, NULL is returned; 
//otherwise a pointer to the first character of the first occurrence of little is returned.





#include <stdio.h>
#include <string.h>

int main() {
    // Test Case 1: Concatenate two strings with a specified maximum length
    // Test Case 1: Concatenation with max length 5: "Hello, World"

    char dest1[20] = "Hello, ";
    const char *src1 = "World!";
    size_t max_length1 = 5;
    
    strncat(dest1, src1, max_length1);
    printf("Test Case 1: Concatenation with max length %zu: \"%s\"\n", max_length1, dest1);

    // Test Case 2: Concatenate two strings with a longer maximum length
    // Test Case 2: Concatenation with max length 10: "Hello, World!"
    char dest2[20] = "Hello, ";
    const char *src2 = "World!";
    size_t max_length2 = 10;

    strncat(dest2, src2, max_length2);
    printf("Test Case 2: Concatenation with max length %zu: \"%s\"\n", max_length2, dest2);



	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	ptr = strnstr(largestring, smallstring, 4);

	printf("%s\n", ptr);
    return 0;
}

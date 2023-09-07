/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:11:43 by eseet             #+#    #+#             */
/*   Updated: 2023/09/07 19:11:44 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//DESCRIPTION
//  The  strdup()  function  returns a pointer to a new string
// which is a duplicate of the string s.  Memory for the new string is obtained
//with malloc(3), and can be freed with free(3).

// RETURN VALUE
//On success, the strdup() function returns a pointer to the duplicated string.
//  It returns NULL if insufficient  memory  was  available,
//with errno set to indicate the cause of the error.

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*dup;
	int		i;

	i = 0;
	str = (char *) s;
	dup = malloc(ft_strlen(str) * (sizeof(char) + 1));
	if (dup == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     const char *original = "Hello, World!";
//     char *duplicate;

//     // Test Case 1: Duplicate a string
//     //Original: "Hello, World!", Duplicate: "Hello, World!"
//     // duplicate = ft_strdup(original);
//     // if (duplicate != NULL) {
//     //     printf("Test Case 1: Original: \"%s\", Duplicate: \"%s\"\n",
// original, duplicate);
//     //     free(duplicate); 
// Free the duplicated string to avoid memory leaks
//     // } else {
//     //     printf("Test Case 1: Memory allocation failed\n");
//     // }

//     // // Test Case 2: Duplicate an empty string
//     // //Original: "", Duplicate: ""
//     // const char *emptyString = "";
//     // duplicate = ft_strdup(emptyString);
//     // if (duplicate != NULL) {
//     //     printf("Test Case 2: Original: \"%s\", Duplicate: \"%s\"\n",
// emptyString, duplicate);
//     //     free(duplicate); 
// Free the duplicated string to avoid memory leaks
//     // } else {
//     //     printf("Test Case 2: Memory allocation failed\n");
//     // }

//     // Test Case 3: Duplicate a NULL string
//     // Original string is NULL
//  //    const char *nullString = NULL;
// 	// if (nullString != NULL) {
// 	//     duplicate = ft_strdup(nullString);
// 	//     if (duplicate != NULL) {
// 	//         printf("Test Case 3: Original: \"%s\", Duplicate: \"%s\"\n",
// nullString, duplicate);
// 	//         free(duplicate);
// Free the duplicated string to avoid memory leaks
// 	//     } else {
// 	//         printf("Test Case 3: Memory allocation failed\n");
// 	//     }
// 	// } else {
// 	//     printf("Test Case 3: Original string is NULL\n");
// 	// }

//     return 0;
// }
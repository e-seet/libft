/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:29:01 by eseet             #+#    #+#             */
/*   Updated: 2023/09/13 15:29:02 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
// #include "stdlib.h"
// size_t	ft_strlen(const char *s)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	str = (char *) s;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }
// parameter
// s1: The string to be trimmed.
// set: The reference set of characters to trim.

// return
// The trimmed string.
// NULL if the allocation fails.
#include "libft.h"

int	iftrim(char const *str, char const *set)
{
	int	j;

	j = 0;
	while (set[j] && set[j] == str[j])
	{
		j++;
		if (set[j] == '\0')
			return (j);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*finalstr;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (0);
	
	str = (char *) s1;
	finalstr = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (*str != '\0')
	{
		if (*str == *set && iftrim(str, set) > 0)
		{
			str = str + iftrim(str, set);
		}
		else
		{
			finalstr[i] = *str;
			i++;
			str++;
		}
	}
	finalstr[i + 1] = '\0';
	return ((char *) finalstr);
}

/*
int main() {
    // // Test Case 1: Trim leading and trailing spaces
    // const char *s1 = "  Hello, World!  ";
    // const char *set = " ";
    // char *trimmed1 = ft_strtrim(s1, set);
    // if (trimmed1 != NULL) {
    //     printf("Trimmed string 1: \"%s\"\n", trimmed1);
    //     free(trimmed1);
    // } else {
    //     printf("Memory allocation failed for Test Case 1!\n");
    // }

    // // Test Case 2: Trim specific characters
    // const char *s2 = "###TrimThisString###";
    // const char *set2 = "#";
    // char *trimmed2 = ft_strtrim(s2, set2);
    // if (trimmed2 != NULL) {
    //     printf("Trimmed string 2: \"%s\"\n", trimmed2);
    //     free(trimmed2);
    // } else {
    //     printf("Memory allocation failed for Test Case 2!\n");
    // }

    // Test Case 3: Trim specific characters
    // const char *s3 = "#!##!TrimThisString##!#";
    // const char *set3 = "#!";
    // char *trimmed3 = ft_strtrim(s3, set3);
    // if (trimmed3 != NULL) {
    //     printf("Trimmed string 3: \"%s\"\n", trimmed3);
    //     free(trimmed3);
    // } else {
    //     printf("Memory allocation failed for Test Case 3!\n");
    // }

	// Test 1:
	char *strtrim;
    char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
    if (!(strtrim = ft_strtrim(s1, "te")))
        printf("NULL\n");
    else
		printf("result:\n%s\n",strtrim);
    if (strtrim == s1)
		printf("\nA new string was not returned\n");
	// Expected (cat -e test01.output):
	// lorem $
	// ipsum   dolor $
	// sit     amet

	printf("\n\n");
	// Test 2:
    char s2[] = "lorem ipsum dolor sit amet";
	if (!(strtrim = ft_strtrim(s2, "te")))
        printf("NULL\n");
    else
		printf("result:\n%s\n",strtrim);
    if (strtrim == s2)
		printf("\nA new string was not returned\n");
	// Expected (cat -e test02.output):
	// lorem ipsum dolor sit am
	
	printf("\n\n");
	// Test 3:
    char s3[] = " lorem ipsum dolor sit amet";
	if (!(strtrim = ft_strtrim(s3, "l")))
        printf("NULL\n");
    else
		printf("result:\n%s\n",strtrim);
    if (strtrim == s3)
		printf("\nA new string was not returned\n");
	// Expected (cat -e test03.output):
	// orem ipsum dolor sit amet

	printf("\n\n");
	// Test 4:
    char s4[] = "lorem ipsum dolor sit amet";
    if (!(strtrim = ft_strtrim(s4, "tel")))
        printf("NULL\n");
    else
		printf("result:\n%s\n",strtrim);
    if (strtrim == s4)
		printf("\nA new string was not returned\n");
	// Expected (cat -e test04.output):
	// ...

    return 0;
}
*/
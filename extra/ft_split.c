/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:09:41 by eseet             #+#    #+#             */
/*   Updated: 2023/09/13 16:09:42 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: The string to be split.
// c: The delimiter character.

// The array of new strings resulting from the split.
// NULL if the allocation fails.

#include "stdlib.h"

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

int	numofwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count += 1;
		i++;
	}
	if (s[i] == '\0')
		count += 1;
	return (count);
}

int	findsep(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
	{
		i++;
	}
	return (i);
}

char	*strcontent(char *str, int i)
{
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * (i + 1));
	ptr[i] = '\0';
	i --;
	while (i)
	{
		ptr[i] = str[i];
		i--;
	}
	ptr[i] = str[i];
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	int		strlen;
	char	*str;
	char	**array;

	wordcount = numofwords(s, c);
	array = malloc((wordcount) * sizeof(char *));
	str = (char *) s;
	while (wordcount > 0)
	{
		strlen = findsep(str, c);
		array[wordcount] = strcontent(str, strlen);
		if (wordcount > 0)
			str = str + strlen + 1;
		wordcount --;
	}
	return (array);
}
/*
#include "stdio.h"

int main() {
    const char *input_str = "Hello,World,How,Are,You";
    char delimiter = ',';

    // Call ft_split to split the input string
    char **result = ft_split(input_str, delimiter);

	int x = numofwords(input_str, delimiter);

	while (x)
	{
		printf("%s\n", result[x]);
		x--;
	}
	


    return 0;
}
*/

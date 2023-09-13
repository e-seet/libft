/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:14:49 by eseet             #+#    #+#             */
/*   Updated: 2023/09/13 19:14:50 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

// s: The string to output.
// fd: The file descriptor on which to write
void ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

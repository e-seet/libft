/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:18:38 by eseet             #+#    #+#             */
/*   Updated: 2023/09/13 19:18:39 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n: The integer to output.
// fd: The file descriptor on which to write.

// #include <stdlib.h>
// #include <unistd.h> // for write function

//previous code
// char	*reverse(char *str, int i)
// {
// 	int		j;
// 	char	temp;

// 	j = 0;
// 	if (str[0] == '-')
// 		j = 1;
// 	while (i > j)
// 	{
// 		temp = str[i];
// 		str[i] = str[j];
// 		str[j] = temp;
// 		i--;
// 		j++;
// 	} 
// 	return (str);
// }

// char	*ft_itoa(int n)
// {
// 	char		*str;
// 	int			i;
// 	long int	n2;

// 	str = malloc(sizeof(char) * 20);
// 	n2 = n;
// 	i = 0;
// 	if (0 > n2)
// 	{
// 		str[i] = '-';
// 		n2 = n2 * -1;
// 		i = 1;
// 	}
// 	while (n2 > 9)
// 	{
// 		str[i] = n2 % 10 + '0';
// 		n2 = n2 / 10;
// 		i++;
// 	}
// 	str[i] = n2 + '0';
// 	str[i + 1] = '\0';
// 	return (reverse(str, i));
// }
//end of previous code
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = n * -1;
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	ft_putchar_fd(num % 10 + '0', fd);
}
// void	ft_putnbr_fd(int n, int fd)
// {
// 	char *str;
// 	int len;

// 	str = ft_itoa(n);
// 	len = ft_strlen(str);
// 	write(fd, ft_itoa(n), len);
// }

// int main(void)
// {
// 	ft_putnbr_fd(123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// 	return (0);
// }

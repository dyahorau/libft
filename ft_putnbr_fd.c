/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 20:07:18 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 12:14:46 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static long		negate(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (-10000000000000000);
	}
	else
	{
		write(fd, "-", 1);
		n = -1 * n;
		return (n);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int			x;
	char		c;

	if (n < 0 && n >= -2147483648)
		n = negate(n, fd);
	if (n <= 9 && n >= 0)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else if (n >= 10 && n <= 2147483647)
	{
		x = 10;
		while (n / x >= 10)
			x = x * 10;
		while (x >= 1 && n / x >= 0)
		{
			c = n / x + '0';
			write(fd, &c, 1);
			n = n - (n / x) * x;
			x = x / 10;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 10:24:03 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 17:11:16 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	i;

	if (n == 0)
		return (0);
	else
	{
		i = 0;
		p1 = (char *)s1;
		p2 = (char *)s2;
		while (p1[i] == p2[i] && p1 && p2 && i < n - 1)
			i++;
		return ((unsigned char)p1[i] - (unsigned char)p2[i]);
	}
}

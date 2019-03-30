/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:02:40 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/09 16:46:52 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (p[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (p[i] == c)
			return (&p[i]);
		else
			i--;
	}
	return (NULL);
}

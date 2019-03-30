/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:55:07 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/09 16:42:34 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (p[i] != '\0')
	{
		if (s[i] == c)
			return (&p[i]);
		else
			i++;
	}
	if (s[i] == c)
		return (&p[i]);
	else
		return (NULL);
}

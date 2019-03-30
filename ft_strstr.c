/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 22:27:37 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/24 14:59:45 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *s1copy;
	char *s2copy;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1)
	{
		s1copy = (char*)s1;
		s2copy = (char*)s2;
		while (*s2copy && (*s1copy == *s2copy))
		{
			s1copy++;
			s2copy++;
		}
		if (*s2copy == '\0')
			return ((char*)s1);
		s1++;
	}
	return (0);
}

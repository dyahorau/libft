/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:13:34 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/09 14:17:23 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char				*ft_strncat(char *s1, const char *s2, size_t n)
{
	int				id;
	unsigned int	is;

	id = 0;
	is = 0;
	while (s1[id] != '\0')
		id++;
	while (s2[is] != '\0' && is < n)
	{
		s1[id] = s2[is];
		id++;
		is++;
	}
	s1[id] = '\0';
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 18:20:08 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 14:19:46 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*sdup;

	i = 0;
	len = 1;
	while (s1[i] != '\0')
	{
		i++;
	}
	len = i + 1;
	sdup = (char *)malloc(sizeof(*sdup) * len);
	if (!sdup)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		sdup[i] = s1[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

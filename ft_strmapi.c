/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 13:54:24 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 18:55:35 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*strmap;

	i = 0;
	if (!s)
		return (NULL);
	strmap = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!strmap)
		return (NULL);
	while (s[i] != '\0')
	{
		strmap[i] = f(i, s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}

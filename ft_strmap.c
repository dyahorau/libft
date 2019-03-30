/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 13:11:02 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/24 13:58:18 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*strmap;

	if (!s)
		return (NULL);
	i = 0;
	strmap = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!strmap)
		return (NULL);
	while (s[i] != '\0')
	{
		strmap[i] = f(s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}

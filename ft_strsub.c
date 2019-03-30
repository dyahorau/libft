/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 15:55:20 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/24 14:01:16 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	substr = (char *)malloc(sizeof(*substr) * len + 1);
	if (!substr)
		return (NULL);
	else
	{
		while (i < len)
		{
			substr[i] = s1[start];
			start++;
			i++;
		}
		substr[i] = '\0';
		return (substr);
	}
}

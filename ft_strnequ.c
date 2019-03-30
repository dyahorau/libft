/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 18:44:30 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/24 13:59:46 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	if (n == 0)
		return (1);
	else
	{
		while (i < n - 1 && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
			i++;
		if (s1[i] == s2[i])
			return (1);
		else
			return (0);
	}
}

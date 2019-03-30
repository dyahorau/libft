/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 21:53:00 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/19 14:58:02 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *ls, const char *rs, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	else
	{
		i = 0;
		while (ls[i] == rs[i] && ls[i] != '\0' && rs[i] != '\0' && i < n - 1)
			i++;
		return ((unsigned char)ls[i] - (unsigned char)rs[i]);
	}
}

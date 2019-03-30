/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 22:00:13 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 17:17:21 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*new;

	new = (char *)malloc(sizeof(*new) * size + 1);
	if (!new)
		return (NULL);
	else
	{
		ft_bzero(new, size + 1);
		return (new);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 13:32:28 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 17:07:16 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*tmp;

	tmp = ft_strnew(len);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, len);
		dest = ft_memcpy(dest, tmp, len);
	}
	free(tmp);
	return (dest);
}

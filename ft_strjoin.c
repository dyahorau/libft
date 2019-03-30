/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 14:43:40 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/24 14:02:48 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	joint = (char *)malloc(sizeof(*joint) * (len + 1));
	if (joint == NULL)
		return (NULL);
	else
	{
		joint = ft_strcpy(joint, s1);
		joint = ft_strcat(joint, s2);
		return (joint);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 13:37:31 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/24 14:04:04 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		b;
	int		e;
	int		it;
	char	*trim;

	b = 0;
	e = 0;
	it = 0;
	if (!s)
		return (NULL);
	while (s[e] != '\0')
		e++;
	e--;
	while ((s[e] == ' ' || s[e] == '\n' || s[e] == '\t') && e != b && e != 0)
		e--;
	e++;
	while (b != e && (s[b] == ' ' || s[b] == '\n' || s[b] == '\t'))
		b++;
	trim = (char *)malloc(sizeof(*trim) * (e - b + 1));
	if (!trim)
		return (NULL);
	while (b < e)
		trim[it++] = s[b++];
	trim[it] = '\0';
	return (trim);
}

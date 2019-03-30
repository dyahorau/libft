/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 16:38:06 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/23 21:42:36 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*one_word(char const *s, char c, int i)
{
	int			i2;
	char		*word;

	i2 = i;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i - i2 + 1));
	i = 0;
	while (s[i2] && s[i2] != c)
	{
		word[i] = s[i2];
		i++;
		i2++;
	}
	word[i] = '\0';
	return (word);
}

static int		countstr(char const *s, char c)
{
	int			i;
	int			ct;

	i = 0;
	ct = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			ct++;
			while (s[i] != c)
				i++;
		}
	}
	return (ct);
}

char			**ft_strsplit(char const *s, char c)
{
	int			word_count;
	int			array_ind;
	int			i;
	char		**array;

	if (!s)
		return (NULL);
	word_count = countstr(s, c);
	array_ind = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return (NULL);
	while (s[i] && array_ind < word_count)
	{
		while (s[i] == c && s[i])
			i++;
		array[array_ind] = one_word(s, c, i);
		array_ind++;
		while (s[i] != c && s[i])
			i++;
	}
	array[array_ind] = 0;
	return (array);
}

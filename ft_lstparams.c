/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstparams.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:12:27 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/29 16:32:19 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstparams(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		i;

	if (ac <= 0)
		return (NULL);
	i = 1;
	tmp = NULL;
	while (i < ac)
	{
		list = ft_lstelem(av[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}

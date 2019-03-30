/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:06:47 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/29 16:38:36 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpushback(t_list **begin_list, void *content)
{
	t_list	*new;
	t_list	*tmp;

	if (!(*begin_list))
	{
		*begin_list = ft_lstelem("World");
		return ;
	}
	else
	{
		new = ft_lstelem(content);
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

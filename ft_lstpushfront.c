/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyahorau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:09:04 by dyahorau          #+#    #+#             */
/*   Updated: 2019/03/29 16:39:06 by dyahorau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpushfront(t_list **begin_list, void *content)
{
	t_list	*new;

	if (!(*begin_list))
	{
		*begin_list = ft_lstelem("World");
		return ;
	}
	else
	{
		new = ft_lstelem(content);
		new->next = *begin_list;
		*begin_list = new;
	}
}

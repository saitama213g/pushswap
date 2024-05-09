/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:00:51 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:34:21 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*list;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = *lst;
	while (list->next)
	{
		list = list->next;
	}
	list->next = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:39:01 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:41:36 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	give_position(t_stack *a)
{
	int	size;

	size = ft_lstsize(a);
	while (a)
	{
		if (a->index < size / 2)
			a->position = 0;
		else
			a->position = 1;
		a = a->next;
	}
}

void	give_index(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a->index = i;
		a = a->next;
		i++;
	}
}

void	give_cost(t_stack *a)
{
	t_stack	*tmp;

	if (!a)
		return ;
	give_index(a);
	give_position(a);
	tmp = a;
	while (tmp)
	{
		if (tmp->position == 0)
			tmp->cost = tmp->index;
		else
			tmp->cost = ft_lstsize(a) - tmp->index;
		tmp = tmp->next;
	}
}

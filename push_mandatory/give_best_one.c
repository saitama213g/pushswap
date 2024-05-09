/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_best_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:48:49 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:29:06 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	update_stack(t_stack *a)
{
	give_index(a);
	give_position(a);
	give_cost(a);
}

int	biggest_cost(int i, int y)
{
	if (i > y)
		return (i);
	return (y);
}

t_stack	*give_best_one_to_push(t_stack *b)
{
	t_stack		*retu;
	int			smallest_cost;

	retu = b;
	smallest_cost = b->cost + b->besto->cost;
	while (b)
	{
		if (b->besto != NULL)
		{
			if (b->cost + b->besto->cost < smallest_cost)
			{
				smallest_cost = b->cost + b->besto->cost;
				retu = b;
			}
		}
		b = b->next;
	}
	return (retu);
}

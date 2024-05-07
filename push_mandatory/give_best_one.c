/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_best_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:48:49 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 16:07:18 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void update_stack(stack_arr *a)
{
	give_index(a);
	give_position(a);
	give_cost(a);
}

int biggest_cost(int i, int y)
{
	if (i > y)
		return i;
	return y;
}

stack_arr *give_best_one_to_push(stack_arr *a, stack_arr *b)
{
	stack_arr *retu = b;
	int smallest_cost = b->cost + b->besto->cost;

	update_stack(a);
	update_stack(b);
	give_bsto(&a, &b);
	while (b)
	{
		if (b->besto != NULL)
		{
			if ((b->position && b->besto->position) || (!(b->position) && !(b->besto->position)))
			{
				if (biggest_cost(b->cost, b->besto->cost) < smallest_cost)
				{	
					smallest_cost = biggest_cost(b->cost,  b->besto->cost);
					retu = b;
				}
			}
			else if(b->cost + b->besto->cost < smallest_cost)
			{
				smallest_cost = b->cost + b->besto->cost;
				retu = b;
			}
		}
		b = b->next;
	}
	return retu;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:41:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 21:39:51 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	to_top(stack_arr **tmp, stack_arr *top, char a_b)
{
	if (!tmp || !(*tmp) || !top)
		return;

	give_index(*tmp);
	give_position(*tmp);
	if (top->position)
	{
		while (*tmp != top)
			rra(tmp, a_b);
	}
	else if (top->position == 0)
	{
		while (*tmp != top)
			ra(tmp, a_b);
	}
}

void	push_to_a(stack_arr **a, stack_arr **b ,stack_arr *top)
{
	if (top->position == 0 && top->besto->position == 0)
		while (top->besto != *a && top != *b)
			rr(a, b);
	else if(top->position == 1 && top->besto->position == 1)
		while (top->besto != *a && top != *b)
			rrr(a, b);
	if (top->besto != *a)
		to_top(a, top->besto, 'a');
	if (top != *b)
		to_top(b, top, 'b');
	pa(a, b, 'a');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:56:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 20:44:41 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	push_smaller(stack_arr **a, stack_arr **b)
{
	stack_arr *smaller;

	smaller = smallest(*a);
	if (smaller->position == 0)
	{
		while (smaller->nmbr != (*a)->nmbr)
			ra(a, 'a');
	}else if (smaller->position == 1)
	{
		while (smaller->nmbr != (*a)->nmbr)
			rra(a, 'a');
	}
	pa(b, a, 'b');
}

// void update_ip(stack_arr *a)
// {
// 	give_index(a);
// 	give_position(a);
// }

void	sort_5(stack_arr **a, stack_arr **b)
{
	if (ft_lstsize(*a) != 5)
		return;

	give_index(*a);
	give_position(*a);
	push_smaller(a, b);
	push_smaller(a, b);
	sort_3(a);
	pa(a, b, 'a');
	pa(a, b, 'a');
}

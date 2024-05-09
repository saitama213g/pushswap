/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:18:09 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:45 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	find_smaller_make_it_top(t_stack **a)
{
	t_stack	*smlst;

	smlst = smallest(*a);
	to_top(a, smlst, 'a');
}

void	best_move(t_stack **a, t_stack **b)
{
	keep_5(a, b);
	while (*b)
	{
		update_stack(*a);
		update_stack(*b);
		give_bsto(a, b);
		push_to_a(a, b, give_best_one_to_push(*b));
	}
	give_index(*a);
	give_position(*a);
	find_smaller_make_it_top(a);
}

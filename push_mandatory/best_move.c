/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:18:09 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/06 22:45:25 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_mandatory.h"

void	find_smaller_make_it_top(stack_arr **a)
{
	stack_arr *smlst;

	smlst = smallest(*a);
	to_top(a,smlst, 'a');
}

void	best_move(stack_arr **a, stack_arr **b)
{
	keep_3(a, b);
	while (*b)
	{
		update_stack(*a);
		update_stack(*b);
		give_bsto(a, b);
		push_to_a(a, b, give_best_one_to_push(*a, *b));
	}
	update_stack(*a);
	find_smaller_make_it_top(a);
	printf("\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:56:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/15 11:02:33 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	push_smaller(t_stack **a, t_stack **b)
{
	t_stack	*smaller;

	give_index(*a);
	give_position(*a);
	smaller = smallest(*a);
	if (smaller->position == 0)
	{
		while (smaller->nmbr != (*a)->nmbr)
			ra(a, 'a');
	}
	else if (smaller->position == 1)
	{
		while (smaller->nmbr != (*a)->nmbr)
			rra(a, 'a');
	}
	pa(b, a, 'b');
}

void	sort_5(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) != 5)
		return ;
	push_smaller(a, b);
	push_smaller(a, b);
	sort_3(a);
	pa(a, b, 'a');
	pa(a, b, 'a');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:28:21 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/21 18:53:06 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	push_swap(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
	{
		if ((*a)->nmbr > (*a)->next->nmbr)
			sa(a, 'a');
	}
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
	{
		push_smaller(a, b);
		sort_3(a);
		pa(a, b, 'a');
	}
	else if (size == 5)
		sort_5(a, b);
	else if (size > 5)
		best_move(a, b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:56:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/03 19:28:48 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void give_position(stack_arr *a)
{
	int size = ft_lstsize(a);
	while (a)
	{
		if (a->index <= size/2)
			a->position = 0;
		else
			a->position = 1;
		a = a->next;
	}
}

void give_index(stack_arr *a)
{
	int i = 0;
	while (a)
	{
		a->index = i;
		a = a->next;
		i++;
	}
}

void	push_smaller(stack_arr **a, stack_arr **b)
{
	stack_arr *smaller;
	stack_arr *tmp;

	smaller = *a;
	tmp = *a;
	(void)b;
	while (tmp)
	{
		if (smaller->nmbr > tmp->nmbr)
			smaller = tmp;
		tmp = tmp->next;
	}
	// print_arr_position(a);
	// print_arr(tmp);
	if (smaller->position == 0)
	{
		while (smaller->nmbr != (*a)->nmbr)
			ra(a, 'a');
	}else if ( smaller->position == 1)
	{
		while (smaller->nmbr != (*a)->nmbr)
			rra(a, 'a');
	}
}

// void update_ip(stack_arr *a)
// {
// 	give_index(a);
// 	give_position(a);
// }

void sort_5(stack_arr **a, stack_arr **b)
{
	if (ft_lstsize(*a) != 5)
		return;
	give_position(*a);
	push_smaller(a, b);
	pa(b, a, 'b');
	push_smaller(a, b);
	pa(b, a, 'b');
	sort_3(a);
	pa(a, b, 'a');
	pa(a, b, 'a');
}

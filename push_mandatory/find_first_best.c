/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_first_best.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:37:36 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 21:12:39 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	find_first_best(stack_arr **a, stack_arr **b)
{
	stack_arr *tmp_a;
	stack_arr *tmp_b;
	stack_arr *smallest_bi;

    if (!(*b))
		return;  // If b is NULL, return immediately
	else if (*a == NULL)
	{
		(*b)->besto = NULL;
		return;
	}
	smallest_bi = bigger(*a);
	if (smallest_bi->nmbr < (*b)->nmbr)
	{
		(*b)->besto = smallest(*a);
		return;
	}
	tmp_b = *b;
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->nmbr < smallest_bi->nmbr && tmp_a->nmbr > tmp_b->nmbr)
			smallest_bi = tmp_a;
		tmp_a = tmp_a->next;
	}
	tmp_b->besto = smallest_bi;
}

void 	give_bsto(stack_arr **a, stack_arr **b)
{
	stack_arr *tmp;

	if (*a == NULL || *b == NULL)
		return;
	tmp = *b;
	while (tmp)
	{
		find_first_best(a, &tmp);
		tmp = tmp->next;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_first_best.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:37:36 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:34 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	find_first_best(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*smallest_bi;

	if (!(*b))
		return ;
	else if (*a == NULL)
	{
		(*b)->besto = NULL;
		return ;
	}
	smallest_bi = bigger(*a);
	if (smallest_bi->nmbr < (*b)->nmbr)
	{
		(*b)->besto = smallest(*a);
		return ;
	}
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->nmbr < smallest_bi->nmbr && tmp_a->nmbr > (*b)->nmbr)
			smallest_bi = tmp_a;
		tmp_a = tmp_a->next;
	}
	(*b)->besto = smallest_bi;
}

void	give_bsto(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a == NULL || *b == NULL)
		return ;
	tmp = *b;
	while (tmp)
	{
		find_first_best(a, &tmp);
		tmp = tmp->next;
	}
}

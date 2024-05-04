/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:27:26 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 19:29:02 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	sort_3(stack_arr **a)
{
	stack_arr *tmp;

	tmp = *a;
	int biggest = tmp->nmbr;

	while (tmp)
	{
		if (biggest < tmp->nmbr)
			biggest = tmp->nmbr;	
		tmp = tmp->next;
	}
	if ((*a)->nmbr == biggest)
	{
		ra(a, 'a');
	}else if ((*a)->next->nmbr == biggest)
	{
		rra(a, 'a');
	}
	if ((*a)->nmbr > (*a)->next->nmbr)
	{
		sa(a, 'a');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:35:30 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:41 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

t_stack	*bigger(t_stack *a)
{
	t_stack	*bigger;

	bigger = a;
	while (a)
	{
		if (a->nmbr > bigger->nmbr)
			bigger = a;
		a = a->next;
	}
	return (bigger);
}

t_stack	*smallest(t_stack *a)
{
	t_stack	*smallest;

	smallest = a;
	while (a)
	{
		if (a->nmbr < smallest->nmbr)
			smallest = a;
		a = a->next;
	}
	return (smallest);
}

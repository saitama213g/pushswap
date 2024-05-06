/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:35:30 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/06 18:46:38 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

stack_arr	*bigger(stack_arr *a)
{
	stack_arr *bigger = a;
	while (a)
	{
		if (a->nmbr > bigger->nmbr)
			bigger = a;
		a = a->next;
	}
	return bigger;
}

stack_arr	*smallest(stack_arr *a)
{
	stack_arr *smallest = a;
	while (a)
	{
		if (a->nmbr < smallest->nmbr)
			smallest = a;
		a = a->next;
	}
	return smallest;
}
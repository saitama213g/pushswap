/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:11 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/01 13:50:40 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void sa(stack_arr *arr)
{
	int tmp;

	if(!arr || !arr->next)
		return;
	tmp = arr->nmbr;
	arr->nmbr = arr->next->nmbr;
	arr->next->nmbr = tmp;
}

void (*sb)(stack_arr *) = sa;

void ss(stack_arr *arra, stack_arr *arrb)
{
	sa(arra);
	sb(arrb);
}

void pa(stack_arr **arra, stack_arr **arrb)
{
	if (!arra || !arrb)
		return;
	list_add_front(arra, (*arrb)->nmbr);
	list_remove_first(arrb);
}

void (*pb)(stack_arr, stack_arr) = pa;

void ra(stack_arr *arr)
{
	int tmp = last_element(arr);
	int first;
	while (arr)
	{
		first = arr->nmbr;
		arr->nmbr = tmp;
		tmp = first;
		arr = arr->next;
	}
}

void (*rb)(stack_arr *arr) = ra;

void rr(stack_arr *arra, stack_arr *arrb)
{
	if (!arra || !arrb)
		return;
	ra(arra);
	rb(arrb);
}

void rra(stack_arr *arr)
{
	if (!arr)
		return;
	int first = arr->nmbr;
	while (arr->next)
	{
		arr->nmbr = arr->next->nmbr;
		arr=arr->next;
	}
	arr->nmbr = first;
}

void    (*rrb)(stack_arr *arr) = rra;

void    rrr(stack_arr *arra, stack_arr *arrb)
{
	if (!arra || !arrb)
		return;
	rra(arra);
	rrb(arrb);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:11 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/01 20:27:27 by aet-tale         ###   ########.fr       */
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

void ss(stack_arr *arra, stack_arr *arrb)
{
	sa(arra);
	sa(arrb);
}

void pa(stack_arr **arra, stack_arr **arrb)
{
	if (!arra || !arrb)
		return;
	list_add_front(arra, (*arrb)->nmbr);
	list_remove_first(arrb);
}

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

void rr(stack_arr *arra, stack_arr *arrb)
{
	if (!arra || !arrb)
		return;
	ra(arra);
	ra(arrb);
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

void    rrr(stack_arr *arra, stack_arr *arrb)
{
	if (!arra || !arrb)
		return;
	rra(arra);
	rra(arrb);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:11 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/29 17:47:55 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void sa(stack_arr *arr, char a_b)
{
	int tmp;

	if(!arr || !arr->next)
		return;
	tmp = arr->nmbr;
	arr->nmbr = arr->next->nmbr;
	arr->next->nmbr = tmp;
	if(a_b == 'a')
		ft_printf("sa\n");
	else if(a_b == 'b')
		ft_printf("sb\n");
}


void ss(stack_arr *arra, stack_arr *arrb)
{
	sa(arra, 0);
	sa(arrb, 0);
	ft_printf("ss\n");
}

void pa(stack_arr **arra, stack_arr **arrb, char a_b)
{
	if (!arra || !arrb)
		return;
	list_add_front(arra, (*arrb)->nmbr);
	list_remove_first(arrb);
	if (a_b == 'a')
		ft_printf("pa\n");
	else if (a_b == 'b')
		ft_printf("pb\n");
}

void ra(stack_arr *arr, char a_b)
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
	if (a_b == 'a')
		ft_printf("ra\n");
	else if (a_b == 'b')
		ft_printf("rb\n");
}

void rr(stack_arr *arra, stack_arr *arrb)
{
	if (!arra || !arrb)
		return;
	ra(arra, 0);
	ra(arrb, 0);
	ft_printf("rr\n");
}

void rra(stack_arr *arr, char a_b)
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
	if (a_b == 'a')
		ft_printf("rra\n");
	else if (a_b == 'b')
		ft_printf("rrb\n");
}

void    rrr(stack_arr *arra, stack_arr *arrb)
{
	if (!arra || !arrb)
		return;
	rra(arra, 0);
	rra(arrb, 0);
	ft_printf("rrr\n");
}
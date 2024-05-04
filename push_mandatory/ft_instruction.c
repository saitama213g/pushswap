/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:11 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/01 22:29:44 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void sa(stack_arr **arr, char a_b)
{
	stack_arr *tmp;

	if (!arr || !(*arr) || !(*arr)->next)
		return;
	tmp = (*arr)->next->next;
	ft_lstadd_front(arr, (*arr)->next);
	(*arr)->next->next = tmp; 
	if (a_b == 'a')
		ft_printf("sa\n");
	else if(a_b == 'b')
		ft_printf("sb\n");
}

void	ss(stack_arr *arra, stack_arr *arrb)
{
	sa(&arra, 0);
	sa(&arrb, 0);
	ft_printf("ss\n");
}

void	pa(stack_arr **arra, stack_arr **arrb, char a_b)
{
	stack_arr *next_b;

	if (!arrb || !(*arrb))
		return;
	next_b = (*arrb)->next;
	ft_lstadd_front(arra, *arrb);
	(*arrb)=next_b;

	if (a_b == 'a')
		ft_printf("pa\n");
	else if (a_b == 'b')
		ft_printf("pb\n");
}

void	ra(stack_arr **arr, char a_b)
{
	stack_arr *first;

	first = (*arr);
	(*arr) = (*arr)->next;
	first->next = NULL;
	ft_lstadd_back(arr, first);

	if (a_b == 'a')
		ft_printf("ra\n");
	else if (a_b == 'b')
		ft_printf("rb\n");
}

void	rr(stack_arr **arra, stack_arr **arrb)
{
	if (!arra || !(*arrb))
		return;
	ra(arra, 0);
	ra(arrb, 0);
	ft_printf("rr\n");
}

void	rra(stack_arr **arr, char a_b)
{
	stack_arr *tmp;
	stack_arr *last_element;

	if (!arr || !(*arr) || !(*arr)->next)
		return;

	last_element = ft_lstlast(*arr);
	tmp = (*arr);
	while (tmp->next->next)
		tmp = tmp->next;
	// last_element = tmp->next;
	// ft_printf("this : %d\n", tmp->nmbr);
	tmp->next = NULL;
	ft_lstadd_front(arr, last_element);
	if (a_b == 'a')
		ft_printf("rra\n");
	else if (a_b == 'b')
		ft_printf("rrb\n");
}

void	rrr(stack_arr **arra, stack_arr **arrb)
{
	if (!arra || !arrb)
		return;
	rra(arra, 0);
	rra(arrb, 0);
	ft_printf("rrr\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction1_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:06:09 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 19:39:12 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

void	sa(t_stack **arr, char a_b)
{
	t_stack	*tmp;

	if (!arr || !(*arr) || !(*arr)->next)
		return ;
	tmp = (*arr)->next->next;
	ft_lstadd_front(arr, (*arr)->next);
	(*arr)->next->next = tmp;
	if (a_b == 'a')
		ft_printf("sa\n");
	else if (a_b == 'b')
		ft_printf("sb\n");
}

void	ss(t_stack **arra, t_stack **arrb)
{
	sa(arra, 0);
	sa(arrb, 0);
	ft_printf("ss\n");
}

void	pa(t_stack	**arra, t_stack	**arrb, char a_b)
{
	t_stack	*next_b;

	if (!arrb || !(*arrb))
		return ;
	next_b = (*arrb)->next;
	ft_lstadd_front(arra, *arrb);
	(*arrb) = next_b;
	if (a_b == 'a')
		ft_printf("pa\n");
	else if (a_b == 'b')
		ft_printf("pb\n");
}

void	ra(t_stack	**arr, char a_b)
{
	t_stack	*first;

	if (!(arr) || !(*arr) || !(*arr)->next)
		return ;
	first = (*arr);
	(*arr) = (*arr)->next;
	first->next = NULL;
	ft_lstadd_back(arr, first);
	if (a_b == 'a')
		ft_printf("ra\n");
	else if (a_b == 'b')
		ft_printf("rb\n");
}
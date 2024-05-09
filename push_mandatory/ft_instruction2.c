/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:57:09 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:03 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	rr(t_stack **arra, t_stack **arrb)
{
	ra(arra, 0);
	ra(arrb, 0);
	ft_printf("rr\n");
}

void	rra(t_stack **arr, char a_b)
{
	t_stack	*tmp;
	t_stack	*last_element;

	if (!arr || !(*arr) || !(*arr)->next)
		return ;
	last_element = ft_lstlast(*arr);
	tmp = (*arr);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(arr, last_element);
	if (a_b == 'a')
		ft_printf("rra\n");
	else if (a_b == 'b')
		ft_printf("rrb\n");
}

void	rrr(t_stack	**arra, t_stack	**arrb)
{
	if (!arra || !arrb)
		return ;
	rra(arra, 0);
	rra(arrb, 0);
	ft_printf("rrr\n");
}

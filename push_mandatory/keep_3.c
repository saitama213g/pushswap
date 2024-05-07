/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keep_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:33:48 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 11:28:51 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void keep_3(stack_arr **a, stack_arr **b)
{
	stack_arr *tmp;
	// (void)b;

	tmp = *a;
	while (ft_lstsize(*a) > 3 && tmp)
	{
		if (tmp->nmbr >= ft_average(*a))
		{
			to_top(a, tmp, 'a');
			tmp = (*a)->next;
			pa(b, a, 'b');
		}else 
			tmp = tmp->next;
	}
	sort_3(a);
	// printf("\n");
}

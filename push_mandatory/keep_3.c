/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keep_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:33:48 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/06 22:54:35 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void keep_3(stack_arr **a, stack_arr **b)
{
	(void)b;
	// stack_arr *tmp;

	// tmp = *a;
	// while (ft_lstsize(tmp) > 3)
	// {
	// 	if (tmp->nmbr <= ft_average(tmp))
	// 	{
	// 		to_top(a,tmp, 'a');
	// 		pa(b, a, 'b');
	// 	}
	// 	tmp = tmp->next;
	// }
	sort_3(a);
	printf("\n");
}

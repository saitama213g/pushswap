/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keep_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:33:48 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 16:27:15 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	keep_5(stack_arr **a, stack_arr **b)
{
	while (ft_lstsize(*a) > 5)
	{
		if ((*a)->nmbr <= ft_average(*a))
			pa(b, a, 'b');
		else
			ra(a, 'a');
	}
	sort_5(a, b);
}

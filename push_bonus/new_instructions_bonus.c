/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:27:05 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:43:21 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

void	ss1(t_stack **arra, t_stack **arrb)
{
	sa(arra, 0);
	sa(arrb, 0);
}

void	rrr1(t_stack **arra, t_stack **arrb)
{
	if (!arra || !arrb)
		return ;
	rra(arra, 0);
	rra(arrb, 0);
}

void	rr1(t_stack **arra, t_stack **arrb)
{
	if (!arra || !(*arrb))
		return ;
	ra(arra, 0);
	ra(arrb, 0);
}

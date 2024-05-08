/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:01:28 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 16:39:05 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"
void	ss1(stack_arr **arra, stack_arr **arrb)
{
	sa(arra, 0);
	sa(arrb, 0);
}

void	rrr1(stack_arr **arra, stack_arr **arrb)
{
	if (!arra || !arrb)
		return;
	rra(arra, 0);
	rra(arrb, 0);
}

void	rr1(stack_arr **arra, stack_arr **arrb)
{
	if (!arra || !(*arrb))
		return;
	ra(arra, 0);
	ra(arrb, 0);
}

void check_str()
{
	
}

void apply_instructions(stack_arr **a, stack_arr **b)
{
	char *str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strncmp(str, "sa\n", 3))
			sa(a, 0);
		else if (!ft_strncmp(str, "sb\n", 3))
			sa(b, 0);
		else if (!ft_strncmp(str, "ss\n", 3))
			ss1(a, b);
		else if (!ft_strncmp(str, "ra\n", 3))
			ra(a, 0);
		else if (!ft_strncmp(str, "rb\n", 3))
			ra(b, 0);
		else if (!ft_strncmp(str, "pa\n", 3))
			pa(a, b, 0);
		else if (!ft_strncmp(str, "pb\n", 3))
			pa(b, a, 0);
		else if (!ft_strncmp(str, "rra\n", 4))
			rra(a, 0);
		else if (!ft_strncmp(str, "rrb\n", 4))
			rra(b, 0);
		else if (!ft_strncmp(str, "rrr\n", 4))
			rrr1(a, b);
		else if (!ft_strncmp(str, "rr\n", 3))
			rr1(a, b);
		else
		{
			free(str);
			free_linked(*a);
			free_linked(*b);
			exit(1);
		}
		free(str);
		str = get_next_line(0);
	}
}
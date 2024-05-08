/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:01:28 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 11:38:02 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

void apply_instructions(stack_arr **a, stack_arr **b)
{
	char *str;
	(void)a;
	(void)b;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strncmp(str, "sa", 2))
			sa(a, 0);
		else if (!ft_strncmp(str, "sb", 2))
			sa(b, 0);
		else if (!ft_strncmp(str, "ss", 2))
			ss(*a, *b);
		else if (!ft_strncmp(str, "ra", 2))
			ra(a, 0);
		else if (!ft_strncmp(str, "rb", 2))
			ra(b, 0);
		else if (!ft_strncmp(str, "pa", 2))
			pa(a, b, 0);
		else if (!ft_strncmp(str, "pb", 2))
			pa(b, a, 0);
		else if (!ft_strncmp(str, "rra", 3))
			rra(a, 0);
		else if (!ft_strncmp(str, "rrb", 3))
			rra(b, 0);
		else if (!ft_strncmp(str, "rrr", 3))
			rrr(a, b);
		else if (!ft_strncmp(str, "rr", 2))
			rr(a, b);
		else
			write(2, "bad instra\n", 11);
		free(str);
		str = get_next_line(0);
	}
}
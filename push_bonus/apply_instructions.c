/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:01:28 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:48:36 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

int	check_rrr(char *str, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(str, "ra\n", 3))
		return (ra(a, 0), 1);
	else if (!ft_strncmp(str, "rb\n", 3))
		return (ra(b, 0), 1);
	else if (!ft_strncmp(str, "rra\n", 4))
		return (rra(a, 0), 1);
	else if (!ft_strncmp(str, "rrb\n", 4))
		return (rra(b, 0), 1);
	else if (!ft_strncmp(str, "rrr\n", 4))
		return (rrr1(a, b), 1);
	else if (!ft_strncmp(str, "rr\n", 3))
		return (rr1(a, b), 1);
	return (0);
}

int	check_ss(char *str, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(str, "sa\n", 3))
		return (sa(a, 0), 1);
	else if (!ft_strncmp(str, "sb\n", 3))
		return (sa(b, 0), 1);
	else if (!ft_strncmp(str, "ss\n", 3))
		return (ss1(a, b), 1);
	return (0);
}

void	apply_instructions(t_stack **a, t_stack **b)
{
	char	*str;
	int		i;

	i = 0;
	str = get_next_line(0);
	while (str)
	{
		if (check_ss(str, a, b))
			i++;
		else if (check_rrr(str, a, b))
			i++;
		else if (!ft_strncmp(str, "pa\n", 3))
			pa(a, b, 0);
		else if (!ft_strncmp(str, "pb\n", 3))
			pa(b, a, 0);
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

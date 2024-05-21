/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:37:32 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 20:45:48 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	check_error(ac, av);
	a = give_arr(ac, av);
	if (duplicated_arr(a))
	{
		free_linked(a);
		write(2, "ERROR\n", 6);
		exit(1);
	}
	apply_instructions(&a, &b);
	if (is_sorted(a) && b == NULL)
	{
		write(1, "OK\n", 3);
		return (free_linked(a), 0);
	}
	else
	{
		free_linked(a);
		free_linked(b);
		write(2, "KO\n", 3);
		exit(1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:37:32 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 13:01:01 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_bonus.h"

int main(int ac, char **av)
{
	stack_arr *a;

	check_error(ac, av);
	a = give_arr(ac, av);
	if (duplicated_arr(a))
	{
		free_linked(a);
		write(2, "ERROR\n", 6);
		exit(1);
	}
	else if (is_sorted(a))
	{
		free_linked(a);
		exit(1);
	}
	apply_instructions(&a);
	if (is_sorted(a))
	{
		write(2, "OK\n", 3);
		free_linked(a);
		exit(0);
	}
	else
	{
		free_linked(a);
		write(2, "KO\n", 3);
		exit(0);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:37:32 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 16:05:01 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_bonus.h"

void leak()
{
	system("leaks checker");
}

int main(int ac, char **av)
{
	stack_arr *a;
	stack_arr *b;

	b = NULL;
	atexit(leak);
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
		free_linked(a);
		return 0;
	}
	else
	{
		free_linked(a);
		write(2, "KO\n", 3);
		exit(1);
	}
}
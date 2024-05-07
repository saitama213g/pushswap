/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 16:33:33 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	leak()
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{ 
	stack_arr	*arr;
	stack_arr	*arrb;

	// atexit(leak);
	check_error(ac, av);
	arrb = NULL;
	arr = give_arr(ac, av);
	if (duplicated_arr(arr))
	{
		free_linked(arr);
		write(2, "ERROR\n", 6);
		exit(1);
	}
	else if (is_sorted(arr))
	{
		free_linked(arr);
		return (0);
	}
	push_swap(&arr, &arrb);
	// print_arr(arr);
	free_linked(arr);
}
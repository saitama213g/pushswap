/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/06 22:51:59 by aet-tale         ###   ########.fr       */
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


	arrb = NULL;
	check_error(ac, av);
	arr = give_arr(ac, av);
	if (duplicated_arr(arr))
	{
		free_linked(arr);
		write(2, "duplicated\n", 11);
		exit(1);
	}
	else if (is_sorted(arr))
	{
		write(1, "sorted\n", 7);
		free_linked(arr);
		exit(1);
	}
	keep_3(&arr, &arrb);
	print_arr(arr);
	// push_swap(arr);
	// printf("\n");
	// print_arr(arrb);
	// best_move(&arrb, &arr);
	// find_smaller_make_it_top(arr);
	free_linked(arr);
}
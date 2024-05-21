/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/21 18:55:24 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

int	main(int ac, char **av)
{
	t_stack	*arr;
	t_stack	*arrb;

	check_error(ac, av);
	arrb = NULL;
	arr = NULL;
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
	free_linked(arr);
}

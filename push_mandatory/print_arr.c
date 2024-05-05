/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:11:23 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/05 11:12:04 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void print_arr(stack_arr *arr)
{
	while (arr)
	{
		ft_printf("%i\n", arr->cost);
		arr = arr->next;
	}
}
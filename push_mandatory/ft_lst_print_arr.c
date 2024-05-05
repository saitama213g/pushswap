/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:15:23 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/05 11:22:43 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void print_arr(stack_arr *arr)
{
	while (arr)
	{
		ft_printf("%i\n", arr->nmbr);
		arr = arr->next;
	}
}

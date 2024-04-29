/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:15:23 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/29 17:49:43 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void print_arr(stack_arr *arr)
{
    while (arr)
    {
        ft_printf("%i\n", arr->nmbr);
        arr= arr->next;
    }
}

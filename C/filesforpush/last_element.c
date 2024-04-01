/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:50:57 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/01 13:51:18 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int last_element(stack_arr *arr)
{
	while (arr->next)
	{
		arr = arr->next;
	}
	return (arr->nmbr);
}
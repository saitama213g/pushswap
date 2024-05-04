/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:11:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 17:22:03 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

int	is_sorted(stack_arr *a)
{
	while (a->next)
	{
		if (a->nmbr >= a->next->nmbr)
			return (0);
		a = a->next;
	}
	return (1);
}
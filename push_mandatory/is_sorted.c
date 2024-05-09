/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:11:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 19:02:06 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

int	is_sorted(t_stack *a)
{
	if (a == NULL)
		return (0);
	while (a->next)
	{
		if (a->nmbr >= a->next->nmbr)
			return (0);
		a = a->next;
	}
	return (1);
}

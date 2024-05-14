/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:59:19 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 18:59:40 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:58:08 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 20:28:53 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

int	check_dup(t_stack *a, int nmbr)
{
	t_stack	*temp;

	temp = a->next;
	while (temp)
	{
		if (temp->nmbr == nmbr)
		{
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}

int	duplicated_arr(t_stack *a)
{
	while (a)
	{
		if (check_dup(a, a->nmbr))
			return (1);
		a = a->next;
	}
	return (0);
}

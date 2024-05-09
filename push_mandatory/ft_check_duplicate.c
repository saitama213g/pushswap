/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:27:14 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:18 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

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

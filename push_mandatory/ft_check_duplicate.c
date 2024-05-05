/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:27:14 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/04 21:56:44 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

int	check_dup(stack_arr *a, int nmbr)
{
	stack_arr *temp = a->next;
	while (temp)
	{
		if (temp->nmbr == nmbr)
		{
			return 1;
		}
	    temp = temp->next;
	}
	return 0;
}

int	duplicated_arr(stack_arr *a)
{
	while (a)
	{
		if (check_dup(a, a->nmbr))
			return 1;
		a = a->next;
	}
	return 0;
}

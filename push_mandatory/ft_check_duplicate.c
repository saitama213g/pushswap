/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:27:14 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 16:57:56 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

int	check_dup(stack_arr *a, int nmbr)
{
	a = a->next;
	while (a)
	{
		if (a->nmbr == nmbr)
			return 1;
		a = a->next;
	}
	return 0;
}

int	duplicated_arr(stack_arr *a)
{
	while(a)
	{
		if (check_dup(a, a->nmbr))
			return 1;
		a=a->next;
	}
	return 0;
}

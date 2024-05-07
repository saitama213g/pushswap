/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:33:03 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 11:08:39 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

int	ft_average(stack_arr *a)
{
	int sum;
	int i;
	
	if (!a)
		return 0;
	sum = 0;
	i = 0;
	while (a)
	{
		sum = a->nmbr;
		a = a->next;
		i++;
	}
	if (i != 0)
	{
		return (sum/i);
	}
	return -1;
}

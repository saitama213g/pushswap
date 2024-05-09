/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:33:03 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:22 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

double	ft_average(t_stack *a)
{
	double	sum;
	int		i;

	if (!a)
		return (0);
	sum = 0;
	i = 0;
	while (a)
	{
		sum += a->nmbr;
		a = a->next;
		i++;
	}
	return (sum / i);
}

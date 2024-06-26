/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_linked.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:46:26 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:42:29 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	free_linked(t_stack *arr)
{
	t_stack	*tmp;

	while (arr)
	{
		tmp = arr->next;
		free(arr);
		arr = tmp;
	}
}

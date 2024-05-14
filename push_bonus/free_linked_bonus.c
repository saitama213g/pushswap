/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_linked_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:01:23 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 19:01:40 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

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

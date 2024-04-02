/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_first.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:45:20 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/01 13:50:04 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	list_remove_first(stack_arr **arr)
{
	stack_arr	*tmp;

	if (!arr || !(*arr))
		return;

	tmp = *arr;
	(*arr) = (*arr)->next;
	tmp->next = NULL;
	free(tmp);
}
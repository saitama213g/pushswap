/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_first.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:45:20 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:34:16 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	list_remove_first(t_stack **arr)
{
	t_stack	*tmp;

	if (!arr || !(*arr))
		return ;
	tmp = *arr;
	(*arr) = (*arr)->next;
	tmp->next = NULL;
	free(tmp);
}

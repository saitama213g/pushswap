/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:06:21 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/01 13:49:40 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_lstadd_front(stack_arr **lst, stack_arr *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

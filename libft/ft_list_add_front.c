/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:19 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:33:51 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	list_add_back(t_stack **head, int data)
{
	t_stack	*tmp;

	if (!head)
		return ;
	tmp = malloc(sizeof(t_stack));
	tmp->next = NULL;
	tmp->nmbr = data;
	ft_lstadd_back(head, tmp);
}

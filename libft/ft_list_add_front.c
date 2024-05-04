/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:19 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 17:35:41 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void list_add_back(stack_arr **head, int data)
{
    stack_arr *tmp;

    if (!head)
        return;
    tmp = malloc(sizeof(stack_arr));
    tmp->next = NULL;
    tmp->nmbr = data;
    ft_lstadd_back(head, tmp);
    // (*head)->nmbr = data;
    // (*head)->next = tmp;
}

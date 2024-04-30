/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:19 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/30 13:14:13 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void list_add_front(stack_arr **head, int data)
{
    stack_arr *tmp;

    if (!head)
        return;
    tmp = *head;
    *head = malloc(sizeof(stack_arr));
    (*head)->nmbr = data;
    (*head)->next = tmp;
}

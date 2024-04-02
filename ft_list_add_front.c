/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:01:19 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/01 13:35:55 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void list_add_front(stack_arr **head, int data)
{
    if (!head)
        return;
    stack_arr *tmp;
    tmp = *head;
    *head = malloc(sizeof(stack_arr));
    (*head)->nmbr = data;
    (*head)->next = tmp;
}
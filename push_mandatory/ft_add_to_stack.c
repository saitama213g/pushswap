/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:07:12 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/30 13:07:43 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void ft_add_tostack(stack_arr **arr, char	**str)
{
	int i;

	i = 0;
	while (str[i])
	{
		list_add_front(arr, ft_atoi(str[i]));
		i++;
	}
}

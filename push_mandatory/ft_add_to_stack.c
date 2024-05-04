/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:07:12 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 17:36:14 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void	ft_add_tostack(stack_arr **arr, char	**str)
{
	int i;
	i = 0;
	while (str[i])
	{
		list_add_back(arr, ft_atoi(str[i], str));
		i++;
	}
}

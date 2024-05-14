/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:02:14 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 19:02:49 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

void	ft_add_tostack(t_stack **arr, char	**str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		list_add_back(arr, ft_atoi(str[i], str));
		i++;
	}
}

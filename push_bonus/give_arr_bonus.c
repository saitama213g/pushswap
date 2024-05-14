/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_arr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:55:48 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 19:22:20 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

t_stack	*give_arr(int ac, char **av)
{
	char		**str;
	t_stack		*a;
	int			i;

	i = 1;
	str = NULL;
	a = NULL;
	if (ac >= 2)
	{
		while (i < ac)
		{
			str = ft_split(av[i]);
			ft_add_tostack(&a, str);
			free_arr(str);
			i++;
		}
	}
	return (a);
}

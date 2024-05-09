/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:04:52 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 22:46:13 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

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

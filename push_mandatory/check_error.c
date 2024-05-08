/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:17 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 15:49:13 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"


void check_overflow_sign(char **str)
{
	int i = 0;
	while (str[i])
	{
		ft_atoi(str[i], str);
		i++;
	}
}

void check_error(int ac, char **av)
{
	int i;
	char **str;

	i = 1;
	str = NULL;
	if (ac > 2)
	{
		while (i < ac)
		{
			str = ft_split(av[i]);
			if (str == NULL || !str[0])
			{
				free_arr(str);
				write(2, "ERROR\n", 6);
				exit(1);
			}
			check_overflow_sign(str);
			free_arr(str);
			i++;
		}
	}else {
		exit(0);
	}
}

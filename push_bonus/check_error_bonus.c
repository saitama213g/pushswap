/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:57:15 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 20:28:57 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_bonus.h"

void	check_overflow_sign(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_atoi(str[i], str);
		i++;
	}
}

void	check_error(int ac, char **av)
{
	int		i;
	char	**str;

	i = 1;
	str = NULL;
	if (ac >= 2)
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
	}
	else
		exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:20:48 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:40:00 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static void	check_o(int number, int tmp, int sign, char **str)
{
	if (number < tmp && sign == 1)
	{
		free_arr(str);
		write(2, "ERROR\n", 6);
		exit(1);
	}
	else if (number > tmp && sign == -1)
	{
		free_arr(str);
		write(2, "ERROR\n", 6);
		exit(1);
	}
}

int	ft_atoi(char *s, char **str)
{
	int	number;
	int	sign;
	int	tmp;

	number = 0;
	sign = 1;
	while (is_space(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (!is_digit(*s))
		print_err(str);
	while (*s)
	{
		if (!is_digit(*s))
			print_err(str);
		tmp = number;
		number = 10 * number + (sign) * (*s - 48);
		check_o(number, tmp, sign, str);
		s++;
	}
	return (number);
}

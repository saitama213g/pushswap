/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:20:48 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/02 01:16:19 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"


static int	is_digit(char s)
{
	if (s >= '0' && s <= '9')
		return (1);
	return (0);
}

static int	is_space(char s)
{
	if (s == ' ' || (s >= 9 && s <= 13))
		return (1);
	return (0);
}

static void	check_o(int number, int tmp, int sign)
{
	if (number < tmp && sign == 1)
	{
		ft_printf("ERROR");
		exit(0);
	}
	else if (number > tmp && sign == -1)
	{
		ft_printf("ERROR");
		exit(0);
	}
}

int	ft_atoi(char *s)
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
	{		
		printf("ERROR");
		exit(0);
	}
	while (*s)
	{
		if (!is_digit(*s))
		{
			
			ft_printf("ERROR");
			exit(0);
		}
		tmp = number;
		number = 10 * number + (sign) * (*s - 48);
		check_o(number, tmp, sign);
		s++;
	}
	return (number);
}

// int main(void)
// {
//     int x = ft_atoi("2147483647");
//     ft_printf("%i\n", x);
//     // if(x < 214748364)
//     // {
//     //     printf("yes");
//     // }
//     // int x = -2147483647;
//     // printf("%i", x);
// }
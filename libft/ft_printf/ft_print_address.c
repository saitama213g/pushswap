/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:24:29 by aet-tale          #+#    #+#             */
/*   Updated: 2024/01/20 14:36:53 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(unsigned long d)
{
	char	*bs;
	int		count;

	count = 0;
	bs = "0123456789abcdef";
	if (d < 16)
		return (print_char(bs[d]));
	count += print_hex(d / 16);
	return (count + print_hex(d % 16));
}

static int	digit_num(unsigned long n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	print_address(void *p)
{
	unsigned long	x;
	int				i;

	x = (unsigned long)p;
	i = 0;
	if (!p)
		return (write(1, "0x0", 3), 3);
	write(1, "0x", 2);
	i = 2;
	i += digit_num(x);
	print_hex(x);
	return (i);
}

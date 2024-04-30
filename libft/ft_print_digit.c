/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:32:58 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/29 18:53:02 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	print_digit(long d, int base, int capital)
{
	char	*bs;
	int		count;

	count = 0;
	bs = "0123456789ABCDEF";
	if (capital == 0)
		bs = "0123456789abcdef";
	if (d < 0)
	{
		count += write(1, "-", 1);
		d = -d;
	}
	if (d < base)
		return (count + print_char(bs[d]));
	count += print_digit(d / base, base, capital);
	return (count + print_digit(d % base, base, capital));
}

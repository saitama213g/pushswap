/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:48:51 by aet-tale          #+#    #+#             */
/*   Updated: 2024/01/20 12:46:20 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit(va_arg(ap, int), 10, 0);
	else if (specifier == 'i')
		count += print_digit(va_arg(ap, int), 10, 0);
	else if (specifier == 'u')
		count += print_digit(va_arg(ap, unsigned int), 10, 0);
	else if (specifier == 'x')
		count += print_digit(va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += print_digit(va_arg(ap, unsigned int), 16, 1);
	else if (specifier == 'p')
		count += print_address(va_arg(ap, void *));
	else
		count += write(1, &specifier, 1);
	return (count);
}

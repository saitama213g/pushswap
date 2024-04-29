/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:32:41 by aet-tale          #+#    #+#             */
/*   Updated: 2024/01/20 12:59:19 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const	*s, ...)
{
	va_list	ap;
	int		count;

	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(ap, s);
	count = 0;
	while (*s)
	{
		if (*s == '%' && *(s + 1))
			count += print_format(*(++s), ap);
		else if (*s != '%')
			count += write(1, s, 1);
		s++;
	}
	va_end(ap);
	return (count);
}

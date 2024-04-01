/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:47:28 by aet-tale          #+#    #+#             */
/*   Updated: 2024/01/18 12:47:03 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char	*s, ...);
int	print_format(char specifier, va_list	ap);
int	print_char(int c);
int	print_str(char	*s);
int	print_digit(long d, int base, int capital);
int	print_address(void	*p);
int	print_str(char *s);

#endif
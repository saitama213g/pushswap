/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:46:04 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 16:53:17 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	print_err(char **str)
{
	free_arr(str);
	write(2, "ERROR\n", 6);
	exit(0);
}
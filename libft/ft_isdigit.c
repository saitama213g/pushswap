/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:44:00 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/02 16:51:37 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char s)
{
	if (s >= '0' && s <= '9')
		return (1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:42:46 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/07 13:02:28 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "unistd.h"
#include "../libft/ft_libft.h"

stack_arr	*give_arr(int ac, char **av);
int			duplicated_arr(stack_arr *a);
void		free_linked(stack_arr *arr);
int			is_sorted(stack_arr *a);
void		check_error(int ac, char **av);
void		apply_instructions(stack_arr **a);

#endif
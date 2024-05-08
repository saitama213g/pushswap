/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:42:46 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/08 15:50:03 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "unistd.h"
#include <stdio.h>
#include "../libft/ft_libft.h"

stack_arr	*give_arr(int ac, char **av);
int			duplicated_arr(stack_arr *a);
void		free_linked(stack_arr *arr);
int			is_sorted(stack_arr *a);
void		check_error(int ac, char **av);
void		apply_instructions(stack_arr **a, stack_arr **b);
void		sa(stack_arr **arr, char a_b);
void		ss(stack_arr *arra, stack_arr *arrb);
void		pa(stack_arr **arra, stack_arr **arrb, char a_b);
void		ra(stack_arr **arr, char a_b);
void		rr(stack_arr **arra, stack_arr **arrb);
void		rra(stack_arr **arr, char a_b);
void		rrr(stack_arr **arra, stack_arr **arrb);
void		print_arr(stack_arr *arr);
int	ft_strncmp(const char *s1, const char *s2, size_t n);


#endif
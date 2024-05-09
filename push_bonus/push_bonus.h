/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:42:46 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:37:55 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_BONUS_H
# define PUSH_BONUS_H
# include "unistd.h"
# include <stdio.h>
# include "../libft/ft_libft.h"

t_stack		*give_arr(int ac, char **av);
int			duplicated_arr(t_stack *a);
void		free_linked(t_stack *arr);
int			is_sorted(t_stack *a);
void		check_error(int ac, char **av);
void		apply_instructions(t_stack **a, t_stack **b);
void		sa(t_stack **arr, char a_b);
void		ss(t_stack *arra, t_stack *arrb);
void		pa(t_stack **arra, t_stack **arrb, char a_b);
void		ra(t_stack **arr, char a_b);
void		rr(t_stack **arra, t_stack **arrb);
void		rra(t_stack **arr, char a_b);
void		rrr(t_stack **arra, t_stack **arrb);
void		print_arr(t_stack *arr);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ss1(t_stack **arra, t_stack **arrb);
void		rrr1(t_stack **arra, t_stack **arrb);
void		rr1(t_stack **arra, t_stack **arrb);

#endif
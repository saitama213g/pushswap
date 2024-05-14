/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:42:46 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/14 19:40:22 by aet-tale         ###   ########.fr       */
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
void		ss(t_stack **arra, t_stack **arrb);
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
t_stack		*give_arr(int ac, char **av);
void		print_arr(t_stack *arr);
int			check_rrr(char *str, t_stack **a, t_stack **b);
int			check_ss(char *str, t_stack **a, t_stack **b);
void		apply_instructions(t_stack **a, t_stack **b);
int			duplicated_arr(t_stack *a);
int			check_dup(t_stack *a, int nmbr);
void		ft_add_tostack(t_stack **arr, char	**str);

#endif
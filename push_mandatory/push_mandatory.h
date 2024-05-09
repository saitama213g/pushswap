/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mandatory.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:32:51 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:28:13 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_MANDATORY_H
# define PUSH_MANDATORY_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/ft_libft.h"

double		ft_average(t_stack *a);
int			ft_printf(const char	*s, ...);
int			ft_atoi(char *s, char **str);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		list_remove_first(t_stack **arr);
void		list_add_back(t_stack **head, int data);
void		print_arr(t_stack *arr);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
char		**ft_split(char const *s);
int			last_element(t_stack *arr);
void		sa(t_stack **arr, char a_b);
void		ss(t_stack **arra, t_stack **arrb);
void		pa(t_stack **arra, t_stack **arrb, char a_b);
void		ra(t_stack **arr, char a_b);
void		rr(t_stack **arra, t_stack **arrb);
void		rra(t_stack **arr, char a_b);
void		rrr(t_stack **arra, t_stack **arrb);
void		sort_3(t_stack **a);
void		ft_add_tostack(t_stack **arr, char	**str);
void		print_arr_position(t_stack *a);
void		update_ip(t_stack *a);
void		give_index(t_stack *a);
void		push_smaller(t_stack **a, t_stack **b);
void		give_position(t_stack *a);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		free_arr(char **str);
int			duplicated_arr(t_stack *a);
void		check_error(int ac, char **av);
t_stack		*give_arr(int ac, char **av);
int			is_sorted(t_stack *a);
void		sort_5(t_stack **a, t_stack **b);
void		print_arr(t_stack *arr);
void		keep_5(t_stack **a, t_stack **b);
t_stack		*bigger(t_stack *a);
t_stack		*smallest(t_stack *a);
void		find_first_best(t_stack **a, t_stack **b);
void		give_bsto(t_stack **a, t_stack **b);
void		give_cost(t_stack *a);
int			biggest_cost(int i, int y);
t_stack		*give_best_one_to_push(t_stack *b);
void		to_top(t_stack **tmp, t_stack *top, char a_b);
void		push_to_a(t_stack **a, t_stack **b, t_stack *top);
void		find_smaller_make_it_top(t_stack **a);
void		update_stack(t_stack *a);
void		best_move(t_stack **a, t_stack **b);
void		push_swap(t_stack **a, t_stack **b);
void		free_linked(t_stack *arr);

#endif
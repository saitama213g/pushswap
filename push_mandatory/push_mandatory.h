/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mandatory.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:32:51 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/06 22:31:37 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_MANDATORY_H
#define PUSH_MANDATORY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// #include "../libft/ft_libft.h"

typedef struct stack_arr{
	struct stack_arr *next;
	struct stack_arr *besto;
	int position;
	int nmbr;
	int index;
	int cost;
}stack_arr;
int			ft_average(stack_arr *a);
int			ft_printf(const char	*s, ...);
void		free_linked(stack_arr *arr);
int			ft_atoi(char *s, char **str);
void		ft_lstadd_front(stack_arr **lst, stack_arr *new);
void		list_remove_first(stack_arr **arr);
void		list_add_back(stack_arr **head, int data);
void		print_arr(stack_arr *arr);
stack_arr	*ft_lstlast(stack_arr *lst);
int			ft_lstsize(stack_arr *lst);
char		**ft_split(char const *s);
size_t		ft_strlen(const char *s);
int			last_element(stack_arr *arr);
void		sa(stack_arr **arr, char a_b);
void		ss(stack_arr *arra, stack_arr *arrb);
void		pa(stack_arr **arra, stack_arr **arrb, char a_b);
void		ra(stack_arr **arr, char a_b);
void		rr(stack_arr **arra, stack_arr **arrb);
void		rra(stack_arr **arr, char a_b);
void		rrr(stack_arr **arra, stack_arr **arrb);
void		sort_3(stack_arr **a);
void		ft_add_tostack(stack_arr **arr, char	**str);
void		print_arr_position(stack_arr *a);
void		update_ip(stack_arr *a);
void		give_index(stack_arr *a);
void		push_smaller(stack_arr **a, stack_arr **b);
void		give_position(stack_arr *a);
void		ft_lstadd_front(stack_arr **lst, stack_arr *new);
void		ft_lstadd_back(stack_arr **lst, stack_arr *new);
void		free_arr(char **str);
int			duplicated_arr(stack_arr *a);
void		check_error(int ac, char **av);
stack_arr	*give_arr(int ac, char **av);
int			is_sorted(stack_arr *a);
void		sort_5(stack_arr **a, stack_arr **b);
void		print_arr(stack_arr *arr);
int			ft_average(stack_arr *a);
void		keep_3(stack_arr **a, stack_arr **b);
stack_arr	*bigger(stack_arr *a);
stack_arr	*smallest(stack_arr *a);
void		find_first_best(stack_arr **a, stack_arr **b);
void		give_bsto(stack_arr **a, stack_arr **b);
void		give_cost(stack_arr *a);
int			biggest_cost(int i, int y);
stack_arr	*give_best_one_to_push(stack_arr *a, stack_arr *b);
void		to_top(stack_arr **tmp, stack_arr *top, char a_b);
void		push_to_a(stack_arr **a, stack_arr **b ,stack_arr *top);
void		find_smaller_make_it_top(stack_arr **a);
void		update_stack(stack_arr *a);
void		best_move(stack_arr **a, stack_arr **b);
void		push_swap(stack_arr **a);


#endif
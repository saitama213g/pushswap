/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mandatory.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:32:51 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/29 16:44:44 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_MANDATORY_H
#define PUSH_MANDATORY_H
#include <stdio.h>
#include <stdlib.h>

typedef struct stack_arr{
	struct stack_arr *next;
	int nmbr;
	int index;
}stack_arr;
void		free_linked(stack_arr *arr);
int			ft_atoi(char *s);
void		ft_lstadd_front(stack_arr **lst, stack_arr *new);
void		list_remove_first(stack_arr **arr);
void		list_add_front(stack_arr **head, int data);
void		print_arr(stack_arr *arr);
int			ft_printf(char const	*s, ...);
stack_arr	*ft_lstlast(stack_arr *lst);
int			ft_lstsize(stack_arr *lst);
char		**ft_split(char const *s);
size_t		ft_strlen(const char *s);
int			last_element(stack_arr *arr);
stack_arr	*duplicate_stack(stack_arr *arr);
void		sa(stack_arr *arr, char a_b);
void		ss(stack_arr *arra, stack_arr *arrb);
void		pa(stack_arr **arra, stack_arr **arrb, char a_b);
void		ra(stack_arr *arr, char a_b);
void		rr(stack_arr *arra, stack_arr *arrb);
void		rra(stack_arr *arr, char a_b);
void    rrr(stack_arr *arra, stack_arr *arrb);

#endif
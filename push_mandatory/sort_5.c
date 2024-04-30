/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:56:43 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/30 17:42:30 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

void print_arr_position(stack_arr *a)
{
	while (a)
	{
		printf("%i\n", a->position);
		a = a->next;
	}
}

void give_position(stack_arr *a)
{
	int size = ft_lstsize(a);
	printf("%i\n", size);
	while (a)
	{
		if (a->index <= size/2)
			a->position = 0;
		else
			a->position = 1;
		a = a->next;
	}
}

void give_index(stack_arr *a)
{
	int i = 0;
	while (a)
	{
		a->index = i;
		a = a->next;
		i++;
	}
}

void	push_smaller(stack_arr *a, stack_arr *b)
{
	stack_arr *smaller;
	stack_arr *tmp;

	smaller = a;
	tmp = a;
	while (tmp)
	{
		if (smaller->nmbr > tmp->nmbr)
			smaller = tmp;
		tmp = tmp->next;
	}
	// print_arr_position(a);
	// print_arr(tmp);
	if (smaller->position == 0)
	{
		while (smaller != a)
			ra(a, 'a');
	}else if (smaller->position == 1)
	{
		while (smaller != a)
			rra(a, 'a');
	}
	// print_arr(a);
	pa(&b, &a, 'b');
	// pa(&b, &tmp, 'b');
}

void update_ip(stack_arr *a)
{
	give_index(a);
	give_position(a);
}

void sort_5(stack_arr *a, stack_arr *b)
{
	// (void)a;
	update_ip(a);
	push_smaller(a, b);
	update_ip(a);
	push_smaller(a, b);
	sort_3(a);
	pa(&a, &b,'a');
	pa(&a, &b, 'a');
	update_ip(a);
	
}

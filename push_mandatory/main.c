/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/04 19:18:27 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

// void sort_stack(stack_arr *arr)
// {
// 	int i = 0;
// 	int tmp = 0;
// 	stack_arr *tmp = arr;
// 	int size = ft_lstsize(arr);

// 	while (size > 1)
// 	{
// 		i = 0;
// 		arr = tmp;
// 		while (i +1 < size)
// 		{
// 			if (arr->nmbr > arr->next->nmbr)
// 			{
// 				tmp =  arr->nmbr;
// 				arr->nmbr = arr->next;
// 				arr->next->nmbr = tmp;
// 			}
// 			i++;
// 		}
// 		arr=arr->next;
// 		size--;
// 	}
// }


// void first_step(stack_arr *arr)
// {
// 	stack_arr *dup;
// 	dup = duplicate_stack(arr);
// 	sort_stack(dup);
// 	while (arr)
// 	{
// 		arr->index = give_index(arr->nmbr, dup);
// 		arr = arr->next;
// 	}
// }

// int second_step(stack_arr *arr)
// {
// 	return (1);
// }


// int last_step(stack_arr *arr)
// {
// 	return (2);
// }

// void push_swap(int ac, char **av)

// void	best_move_sort(stack_arr *a, stack_arr *b)
// {
// 	keep_3_sorted(a, b);
// 	while (1)
// 	{
// 		get_best_moves(a, b);
// 		get_to_top(a, b);
// 		pa(a, b, 'a');
// 		update_ip(a);
// 		update_ip(b);
// 		if (ft_lstsize(b) == 1)
// 		{
// 			pa(&a, &b, 'b');
// 			break;
// 		}
// 	}
	
// }

void	leak()
{
	system("leaks push_swap");
}

// void push_swap(stack_arr **a)
// {
// 	stack_arr *b;
	
// 	b = NULL;

	
// 	push_smaller(a, &b);
// 	push_smaller(a, &b);
// 	sort_3(a);
// }

int	ft_average(stack_arr *a)
{
	int sum;
	int i;
	
	sum = 0;
	i = 0;
	while (a)
	{
		sum = a->nmbr;
		a = a->next;
		i++;
	}
	if (i != 0)
	{
		return (sum/i);
	}
	return -1;
}



void keep_3(stack_arr **a, stack_arr **b)
{
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->nmbr < average(a))
			pa(b, a, 'b');
	}
	sort_3(a);
}

void	find_best_move(stack_arr **a, stack_arr **b)
{
	stack_arr *tmp_a;
	stack_arr *tmp_b;
	stack_arr *smallest_bi;

	tmp_b = *b;
	tmp_a = *a;
	smallest_bi = (*a);
	while (tmp_b)
	{
		tmp_a = *a;
		while (tmp_a)
		{
			if (tmp_a->nmbr > tmp_b->nmbr && smallest_bi->nmbr >= tmp_a->nmbr)
				smallest_bi = tmp_a;
			tmp_a = tmp_a->next;
		}
		tmp_a->besto = smallest_bi;
		tmp_b = tmp_b->next;
	}
}


void print_best_move(stack_arr *a)
{
	while(a)
	{
		printf("nmbr :%i bsto: %i\n", a->nmbr , a->besto->nmbr);
		a = a->next;
	}	
}
int main(int ac, char **av)
{
	stack_arr	*arr;
	stack_arr	*arrb;

	check_error(ac, av);
	arr = give_arr(ac, av);
	arrb = NULL;
	// system("leaks push_swap");
	atexit(leak);
	if (duplicated_arr(arr))
	{
		free_linked(arr);
		write(2, "ERROR\n", 6);
		exit(1);
	}
	else if(is_sorted(arr))
	{
		write(1, "sorted\n", 7);
		free_linked(arr);
		exit(1);
	}
	find_best_move(&arr, &arrb);
	// give_cost(&arr, &arrb);
	// keep_3(&arr, &arrb);
	// print_arr(arr);
	// sort_5(&arr, &arrb);
	// print_arr(arr);
	// push_swap(arr);
	// print_arr(arr);
	// sort_3(&arr);
	free_linked(arr);
}
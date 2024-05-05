/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/05 18:21:29 by aet-tale         ###   ########.fr       */
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
		if ((*a)->nmbr < ft_average(*a))
			pa(b, a, 'b');
	}
	sort_3(a);
}

stack_arr *bigger(stack_arr *a)
{
	stack_arr *bigger = a;
	while (a)
	{
		if (a->nmbr > bigger->nmbr)
			bigger = a;
		a = a->next;
	}
	return bigger;
}

stack_arr *smallest(stack_arr *a)
{
	stack_arr *smallest = a;
	while (a)
	{
		if (a->nmbr < smallest->nmbr)
			smallest = a;
		a = a->next;
	}
	return smallest;
}

void	find_first_best(stack_arr **a, stack_arr **b)
{
	stack_arr *tmp_a;
	stack_arr *tmp_b;
	stack_arr *smallest_bi;

    if (!(*b))
		return;  // If b is NULL, return immediately
	else if (*a == NULL)
	{
		(*b)->besto = NULL;
		return;
	}
	smallest_bi = bigger(*a);
	if (smallest_bi->nmbr < (*b)->nmbr)
	{
		(*b)->besto = smallest(*a);
		return;
	}
    tmp_b = *b;
    tmp_a = *a;
    while (tmp_a)
    {
        if (tmp_a->nmbr < smallest_bi->nmbr && tmp_a->nmbr > tmp_b->nmbr)
			smallest_bi = tmp_a;
        tmp_a = tmp_a->next;
	}
    tmp_b->besto = smallest_bi;
}

void give_bsto(stack_arr **a, stack_arr **b)
{
	stack_arr *tmp;

	if (*a == NULL || *b == NULL)
		return;
	tmp = *b;
	while (tmp)
	{
		find_first_best(a, &tmp);
		tmp = tmp->next;
	}
}

void	get_cost(stack_arr *a)
{
	stack_arr *tmp;

	if (!a)
		return;

	give_index(a);
	give_position(a);
	tmp = a;
	while (tmp)
	{
		if(tmp->position == 0)
			tmp->cost = tmp->index;
		else
			tmp->cost = ft_lstsize(a) - tmp->index;
		tmp = tmp->next;
	}
}

int biggest_cost(int i, int y)
{
	if (i>y)
		return i;
	return y;
}

stack_arr *give_best_one_to_push(stack_arr *a, stack_arr *b)
{
	give_bsto(&a, &b);
	give_index(a);
	give_position(a);
	get_cost(a);
	give_index(b);
	give_position(b);
	get_cost(b);
	stack_arr *retu = b;
	int smallest_cost = b->cost + b->besto->cost;
	while (b)
	{
		if(b->besto != NULL)
		{
			if ((b->position && b->besto->position) || (!(b->position) && !(b->besto->position)))
			{
				if (biggest_cost(b->cost, b->besto->cost) < smallest_cost)
				{	
					smallest_cost = biggest_cost(b->cost,  b->besto->cost);
					retu = b;
				}
			}
			else if(b->cost + b->besto->cost < smallest_cost)
			{
				smallest_cost = b->cost + b->besto->cost;
				retu = b;
			}
		}
		b = b->next;
	}
	return retu;
}

void print_best_move(stack_arr *a)
{
	while(a)
	{
		printf("nmbr :%i bsto: %i\n", a->nmbr , a->besto->nmbr);
		a = a->next;
	}	
}
void	print_cost(stack_arr *arr)
{	
	while (arr)
	{
		ft_printf("number : %i cost is %i\nbsto   :%i besto cost is %i\n",arr->nmbr, arr->cost, arr->besto->nmbr, arr->besto->cost);
		printf("========================\n");
		printf("========================\n");
		arr = arr->next;
	}
}


void print_bsto(stack_arr *a)
{
	while (a)
	{
		printf("nmbr %i besto %i\n",a->nmbr, a->besto->nmbr);
		a = a->next;
	}
}

void print_total_cost(stack_arr *b)
{
	while (b)
	{
		if(b->besto != NULL)
		{
			if ((b->position && b->besto->position) || (!(b->position) && !(b->besto->position)))
			{
				printf("%i\n", biggest_cost(b->cost, b->besto->cost));
			}
			else
			{
				printf("%i\n", b->cost + b->besto->cost);
			}
		}
		b = b->next;
	}
}

void to_top(stack_arr **tmp, stack_arr *top, char a_b)
{
	if (!tmp || !(*tmp) || !top)
		return;
	// (void )a_b;
	// (void )tmp;
	// (void )top;
	if (top->position)
	{
		while (*tmp != top)
			rra(tmp, a_b);
	}
	else if (top->position == 0)
	{
		while (*tmp != top)
			ra(tmp, a_b);
	}
}

void	push_to_a(stack_arr **a, stack_arr **b ,stack_arr *top)
{
	if (top->position == 0 && top->besto->position == 0)
	{
		while (top->besto != *a && top != *b)
			rrr(a, b);
		if(top->besto != *a)
			to_top(a, top->besto, 'a');
		else if(top != *b)
			to_top(b, top, 'b');
	}else if(top->position == 1 && top->besto->position == 1)
	{
		while (top->besto != *a && top != *b)
			rr(a, b);
		if(top->besto != *a)
			to_top(a, top->besto, 'a');
		else if(top != *b)
			to_top(b, top, 'b');
	}else
	{
		to_top(a, top->besto, 'a');
		to_top(b, top, 'b');
	}
	pa(a, b, 'a');
}

int	main(int ac, char **av)
{ 
	stack_arr	*arr;
	stack_arr	*best;
	stack_arr	*arrb;

	check_error(ac, av);
	arr = give_arr(ac, av);
	arrb = NULL;
	list_add_back(&arrb, 5);
	list_add_back(&arrb, 1);
	// system("leaks push_swap");
	// atexit(leak);
	if (duplicated_arr(arr))
	{
		free_linked(arr);
		write(2, "duplicated\n", 11);
		exit(1);
	}
	else if (is_sorted(arr))
	{
		write(1, "sorted\n", 7);
		free_linked(arr);
		exit(1);
	}
	give_index(arr);
	give_position(arr);
	best = give_best_one_to_push(arr, arrb);
	push_to_a(&arr, &arrb, best);
	printf("%i\n", arr->nmbr);
	printf("%i\n", arr->next->nmbr);

	// printf("nmbr %i best %i", best->nmbr, best->besto->nmbr);
	// stack_arr *third = arr->next->next;
	// printf("%i", third->nmbr);
	// to_top(&arr, third, 'a');
	// printf()
	// push_to_a(&arr, &arrb, best);
	// printf("%i\n", best->besto->nmbr);
	// print_cost(arrb);
	// print_total_cost(arr);
	// print_cost()
	// print_bsto(arrb);
	// printf("nmbr %i besto %i\n",arr->nmbr, arrb->besto->nmbr);
	// get_cost(arr);
	// print_arr(arr);
	free_linked(arr);
}
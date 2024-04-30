/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/30 11:39:33 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

static void ft_add_tostack(stack_arr **arr, char	**str)
{
	int i;

	i = 0;
	while (str[i])
	{
		list_add_front(arr, ft_atoi(str[i]));
		i++;
	}
}

stack_arr	*duplicate_stack(stack_arr *arr)
{
	stack_arr *dup;
	stack_arr *tmp;

	dup = malloc(sizeof(stack_arr)*(ft_lstsize(arr) + 1));
	tmp = dup;
	while (arr)
	{
		dup->nmbr = arr->nmbr;
		dup = dup->next;
		arr = arr->next;
	}

	return tmp;
}


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


void	free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}


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

// void sort_3(stack_arr *a)
// {
// 	stack_arr *tmp;

// 	tmp = a;
// 	int biggest = tmp->nmbr;
// 	// if (is_sorted(a))
// 	// 	return;
	
// 	while (tmp)
// 	{
// 		if(biggest < a->nmbr)
// 			biggest = a->nmbr;	
// 		tmp = tmp->next;
// 	}
// 	if (a->nmbr == biggest)
// 	{
// 		rra(a, 'a');
// 	}else if (a->next->nmbr == biggest)
// 	{
// 		ra(a, 'a');
// 	}
// 	if (a->nmbr > a->next->nmbr)
// 	{
// 		sa(a, 'a');
// 	}
// }

// void push_swap(int ac, char **av)

int	main(int ac, char **av)
{
	stack_arr	*b;
	stack_arr	*a;
	int err;
	char		**str;
	int			i;

	a = NULL;
	b = NULL;
	err = 0;
	i = 1;
	// check_error(ac, av);
	// push_swap(ac, av);
	if (ac >= 2)
	{
		while (i < ac)
		{
			str = ft_split(av[i]);
			ft_add_tostack(&a, str);
			// check_dup(a, str);
			// ft_printf("helo\n");
			free_arr(str);
			// print_arr(duplicate_stack(arr));
			// first_step(arr);
			// str = NULL;
			i++;
		}
		print_arr(a);
		printf("\n");
		printf("\n");
		print_arr(a);
		// sa(a, 'a');
		// ft_printf("helo\n");
		free_linked(a);
	}
	// system("leaks push_swap");
	// printf("%s", av[0]);
	// system("valgrind ./push_swap");
	// arr = NULL;
}

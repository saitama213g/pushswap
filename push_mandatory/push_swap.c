/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/30 17:42:11 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_mandatory.h"

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
			free_arr(str);
			i++;
		}
		sort_5(a, b);
		print_arr(a);
		// give_index(a);
		// give_position(a);
		// print_arr_position(a);
		// pa(&b, &a, 'b');
		// push_smaller(a, b);
		// pa(&b, &a, 'b');
		// push_smaller(a, b);
		// sort_5(a,b);
		// print_arr_index(a);
		// sort_5(a);
		// print_arr(b);
		// print_arr(a);
		// sa(a, 'a');
		// ft_printf("helo\n");
		free_linked(a);
	}
	// system("leaks push_swap");
	// printf("%s", av[0]);
	// system("valgrind ./push_swap");
	// arr = NULL;
}

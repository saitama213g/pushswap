/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:11:54 by aet-tale          #+#    #+#             */
/*   Updated: 2024/04/02 01:21:25 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static void	ft_add_tostack(stack_arr **arr, char	**str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		list_add_front(arr, ft_atoi(str[i]));
		i++;
	}
}

static void	free_linked(stack_arr *arr)
{
	stack_arr	*tmp;

	while (arr)
	{
		tmp = arr->next;
		free(arr);
		arr = tmp;
	}
}

static void	free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
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

int	main(int ac, char **av)
{
	stack_arr	*arr;
	char		**str;
	int			i;

	arr = NULL;
	i = 1;
	// check_error(ac, av);
	if (ac >= 2)
	{
		while (i < ac)
		{
			str = ft_split(av[i]);
			ft_add_tostack(&arr, str);
			free_arr(str);
			free(str);
			str = NULL;
			i++;
		}
	}
	print_arr(arr);
	free_linked(arr);
	arr = NULL;
	
}
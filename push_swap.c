#include "push_swap.h"


void print_arr(stack_arrr *arr)
{
    while (arr)
    {
        printf("%i\n", arr->nmbr);
        arr= arr->next;
    }
}

void    list_add_front(stack_arrr **head, int data)
{
	stack_arrr *tmp;

	if (!head)
		return;
	tmp = *head;
	*head = malloc(sizeof(stack_arrr));
	(*head)->nmbr = data;
	(*head)->next = tmp;
}

void	ft_add_tostack(stack_arrr **arr,char	**str)
{
    int i;

    i = 0;
    while(str[i])
    {
        list_add_front(arr, ft_atoi(str[i]));
        i++;
    }
}

void free_linked(stack_arrr *arr)
{
	stack_arrr *tmp;
	while (arr)
	{
		tmp = arr->next;
		free(arr);
		arr = tmp;
	}
}

void free_arr(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	stack_arrr *arr;
	char **str;
	int i;

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
	system("leaks");
}

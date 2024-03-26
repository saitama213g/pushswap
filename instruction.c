#include"push_swap.h"

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

void	list_remove_first(stack_arrr **arr)
{
	stack_arrr	*tmp;

	if (!arr || !(*arr))
		return;

	tmp = *arr;
	(*arr) = (*arr)->next;
	tmp->next = NULL;
	free(tmp);
}


void sa(stack_arrr *arr)
{
	int tmp;

	if(!arr || !arr->next)
		return;
	tmp = arr->nmbr;
	arr->nmbr = arr->next->nmbr;
	arr->next->nmbr = tmp;
}

void (*sb)(stack_arrr *) = sa;

void ss(stack_arrr *arra, stack_arrr *arrb)
{
	sa(arra);
	sb(arrb);
}

int last_element(stack_arrr *arr)
{
	while (arr->next)
	{
		arr = arr->next;
	}
	return (arr->nmbr);
}


void pa(stack_arrr **arra, stack_arrr **arrb)
{
	if (!arra || !arrb)
		return;
	list_add_front(arra, (*arrb)->nmbr);
	list_remove_first(arrb);
}

void (*pb)(stack_arrr, stack_arrr) = pa;

void ra(stack_arrr *arr)
{
	int tmp = last_element(arr);
	int first;
	while (arr)
	{
		first = arr->nmbr;
		arr->nmbr = tmp;
		tmp = first;
		arr = arr->next;
	}
}

void (*rb)(stack_arrr *arr) = ra;

void rr(stack_arrr *arra, stack_arrr *arrb)
{
	if (!arra || !arrb)
		return;
	ra(arra);
	rb(arrb);
}

void rra(stack_arrr *arr)
{
	if (!arr)
		return;
	int first = arr->nmbr;
	while (arr->next)
	{
		arr->nmbr = arr->next->nmbr;
		arr=arr->next;
	}
	arr->nmbr = first;
}

void    (*rrb)(stack_arrr *arr) = rra;

void    rrr(stack_arrr *arra, stack_arrr *arrb)
{
	if (!arra || !arrb)
		return;
	rra(arra);
	rrb(arrb);
}
//#include "push_swap.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct stack_arr{
    struct stack_arr *next;
    int nmbr;
}stack_arrr;



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


// int last_element(stack_arrr *arr)
// {
//     while (arr->next)
//     {
//         arr = arr->next;
//     }
//     return (arr->nmbr);
// }
// void ra(stack_arrr *arr)
// {
//     int tmp1;
//     int tmp2;
//     tmp1 = last_element(arr);
//     while (arr)
//     {
//         if (arr->next)
//         {
//             tmp2 = arr->next->nmbr;
//             arr->next->nmbr = arr->nmbr;
//         }
//         tmp2 = arr->nmbr;
//         arr->nmbr = tmp1;
//         if (arr->next)
//             tmp1 = tmp2;
//         // printf("1   :%i\n", arr->nmbr);
//         // printf("2   :%i\n-------\n", arr->next->nmbr);
//         arr = arr->next;
//     }
// }


// void ra(stack_arrr *arr)
// {
//     int tmp = last_element(arr);
//     int first;
//     while (arr)
//     {
//         first = arr->nmbr;
//         arr->nmbr = tmp;
//         tmp = first;
//         arr = arr->next;
//     }
// }

void print_arr(stack_arrr *arr)
{
    while (arr)
    {
        printf("%i\n", arr->nmbr);
        arr= arr->next;
    }
}

void list_add_front(stack_arrr **head, int data)
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

void pa(stack_arrr **arra, stack_arrr **arrb)
{
	if(!arra || !arrb)
		return;
    list_add_front(arra, (*arrb)->nmbr);
    list_remove_first(arrb);
}

int main(void)
{
    int i = 8;
    stack_arrr *arr;
    stack_arrr *arr2;
    arr2 = NULL;
    arr = NULL;
    while(i)
    {
        list_add_front(&arr, i);
        list_add_front(&arr2, i + 1);
        i--;
    }
    print_arr(arr);
	printf("--------\n");
    rra(arr);
    print_arr(arr);

	// printf("##########\n##########\n");
	// print_arr(arr);
	// printf("--------\n");
    // print_arr(arr2);
    // printf("------------\n");
    // print_arr(arr);
    //printf("%lx", (unsigned long)functiono());
    //printf("%",functiono());
}

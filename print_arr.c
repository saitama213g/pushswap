#include "push_swap.h"

void print_arr(stack_arrr *arr)
{
    while (arr)
    {
        printf("%i\n", arr->nmbr);
        arr= arr->next;
    }
}
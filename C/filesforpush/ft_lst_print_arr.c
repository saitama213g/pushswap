#include "ft_libft.h"

void print_arr(stack_arr *arr)
{
    while (arr)
    {
        printf("%i\n", arr->nmbr);
        arr= arr->next;
    }
}

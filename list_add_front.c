#include "push_swap.h"

void list_add_front(stack_arrr **head, int data)
{
    if (!head)
        return;
    stack_arrr *tmp;
    tmp = *head;
    *head = malloc(sizeof(stack_arrr));
    (*head)->nmbr = data;
    (*head)->next = tmp;
}
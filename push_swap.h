#ifndef PUSH_SWAP
#define PUSH_SWAP
#include <stdio.h>
#include <stdlib.h>

typedef struct stack_arr{
    struct stack_arr *next;
    int nmbr;
}stack_arrr;

int ft_atoi(char *s);
void list_add_front(stack_arrr **head, int data);
void print_arr(stack_arrr *arr);
char	**ft_split(char const *s);


#endif
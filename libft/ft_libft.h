#ifndef FT_LIBFT_H
#define FT_LIBFT_H
#include <stdio.h>
#include <stdlib.h>

typedef struct stack_arr{
	struct stack_arr *next;
	int nmbr;
	int index;
}stack_arr;

int			ft_atoi(char *s);
void		ft_lstadd_front(stack_arr **lst, stack_arr *new);
void		list_remove_first(stack_arr **arr);
void		list_add_front(stack_arr **head, int data);
void		print_arr(stack_arr *arr);
int			ft_printf(char const	*s, ...);
stack_arr	*ft_lstlast(stack_arr *lst);
int			ft_lstsize(stack_arr *lst);
char		**ft_split(char const *s);
size_t		ft_strlen(const char *s);
int			last_element(stack_arr *arr);
int			ft_printf(char const	*s, ...);


#endif
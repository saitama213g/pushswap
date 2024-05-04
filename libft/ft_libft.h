#ifndef FT_LIBFT_H
#define FT_LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct stack_arr{
	struct stack_arr *next;
	int position;
	int nmbr;
	int index;
}stack_arr;

int			ft_printf(const char	*s, ...);
int			print_format(char specifier, va_list	ap);
int			print_char(int c);
int			print_str(char	*s);
int			print_digit(long d, int base, int capital);
int			print_address(void	*p);
int			print_str(char *s);
int			ft_atoi(char *s, char **str);
void		ft_lstadd_front(stack_arr **lst, stack_arr *new);
void		list_remove_first(stack_arr **arr);
void		list_add_back(stack_arr **head, int data);
void		print_arr(stack_arr *arr);
int			ft_printf(char const	*s, ...);
stack_arr	*ft_lstlast(stack_arr *lst);
int			ft_lstsize(stack_arr *lst);
char		**ft_split(char const *s);
size_t		ft_strlen(const char *s);
int			last_element(stack_arr *arr);
int			ft_printf(char const	*s, ...);
void		ft_lstadd_back(stack_arr **lst, stack_arr *new);
void		free_arr(char **str);
int			is_digit(char s);
int			is_space(char s);
void		print_err(char **str);
void		free_arr(char **str);
int			is_digit(char s);
void		print_err(char **str);
stack_arr	*give_arr(int ac, char **av);

#endif
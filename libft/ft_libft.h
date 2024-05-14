/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:12:41 by aet-tale          #+#    #+#             */
/*   Updated: 2024/05/09 18:32:19 by aet-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

typedef struct t_stack
{
	struct t_stack		*next;
	struct t_stack		*besto;
	int					position;
	int					nmbr;
	int					index;
	int					cost;
}	t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char		*ft_strjoin(char *s1, char *s2);
int			ft_strchr(char *s, char c);
int			ft_strlen(char *s);
char		*ft_strjoin(char *s1, char *s2);
char		*get_next_line(int fd);
char		*ft_get_line(char *str);
char		*ft_new_str(char *str);
char		*ft_get_buff(int fd, char *str);
int			ft_printf(const char	*s, ...);
int			print_format(char specifier, va_list	ap);
int			print_char(int c);
int			print_str(char	*s);
int			print_digit(long d, int base, int capital);
int			print_address(void	*p);
int			print_str(char *s);
int			ft_atoi(char *s, char **str);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
void		list_remove_first(t_stack **arr);
void		list_add_back(t_stack **head, int data);
void		print_arr(t_stack *arr);
int			ft_printf(char const	*s, ...);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
char		**ft_split(char const *s);
size_t		ft_strlen1(const char *s);
int			last_element(t_stack *arr);
int			ft_printf(char const	*s, ...);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		free_arr(char **str);
int			is_digit(char s);
int			is_space(char s);
void		print_err(char **str);
void		free_arr(char **str);
int			is_digit(char s);
void		print_err(char **str);
t_stack		*give_arr(int ac, char **av);
char		*get_next_line(int fd);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
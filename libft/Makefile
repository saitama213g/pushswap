# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 13:03:25 by aet-tale          #+#    #+#              #
#    Updated: 2024/05/08 11:24:13 by aet-tale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_split.c ft_lstsize_bonus.c ft_list_add_front_bonus.c \
		ft_atoi.c ft_list_add_front.c ft_lstlast_bonus.c ft_list_remove_first.c last_element.c ft_print_char.c \
		ft_print_str.c ft_print_digit.c ft_printf.c ft_lstadd_back_bonus.c ft_free_arr.c ft_isdigit.c \
		ft_strlen.c ft_print_address.c ft_print_format.c ft_free_arr.c ft_isdigit.c ft_isspace.c ft_print_err.c\
		get_next_line.c get_next_line_utils.c ft_strncmp.c

OBJ=$(SRC:.c=.o)
CC=cc
CFLAGS= -Wall -Wextra -Werror
HEAD_LIB = ft_libft.h
NAME = libft.a

all: $(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c $(HEAD_LIB)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME) 

re:fclean all
.PHONY:all clean fclean re
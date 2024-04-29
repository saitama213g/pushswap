# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aet-tale <aet-tale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 13:03:25 by aet-tale          #+#    #+#              #
#    Updated: 2024/04/29 13:04:57 by aet-tale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_split.c ft_instruction.c ft_lst_print_arr.c ft_lstsize_bonus.c ft_list_add_front_bonus.c\
		ft_atoi.c ft_list_add_front.c ft_lstlast_bonus.c ft_printf/ft_print_char.c \
		ft_printf/ft_print_str.c ft_printf/ft_print_digit.c ft_printf/ft_printf.c \
		ft_printf/ft_strlen.c ft_printf/ft_print_address.c ft_printf/ft_print_format.c \

OBJ=$(SRC:.c=.o)
CC=cc
CFLAGS= -Wall -Wextra -Werror
HEAD_LIB = ft_libft.h
NAME = libft.a
HEAD_PRINT = ft_printf/ft_printf.h

all: $(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c $(HEAD_LIB) $(HEAD_PRINT)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME) 

re:fclean all
.PHONY:all clean fclean re
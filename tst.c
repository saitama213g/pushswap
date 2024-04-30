// CC=cc
// HEAD= push_mandatory/push_mandatory.h
// CFLAGS= -Wall -Wextra -Werror
// NAME= push_swap
// SRC= push_mandatory/push_swap.c push_mandatory/free_linked.c push_mandatory/ft_instruction.c

// OBJ=$(SRC:.c=.o)
// all: $(NAME)

// $(NAME): ./libft/libft.a $(OBJ)
// 	$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)

// ./libft/libft.a:
// 	make -C libft/

// $(OBJ) :$(HEAD)

// clean:
// 	make clean -C libft/
// 	rm -f $(OBJ)

// fclean:clean
// 	rm -f ./libft/libft.a
// 	rm -f $(NAME)

// re:fclean all
// .PHONY:all clean fclean re

// // # bonus : $(NAME_B
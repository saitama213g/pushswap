CC=cc
LIBFT=libft/ft_libft.h
HEAD= push_mandatory/push_mandatory.h
CFLAGS= -Wall -Wextra -Werror
NAME= push_swap
SRC= push_mandatory/free_linked.c push_mandatory/main.c push_mandatory/ft_instruction.c push_mandatory/is_sorted.c\
	 push_mandatory/sort_3.c push_mandatory/ft_add_to_stack.c push_mandatory/ft_check_duplicate.c  push_mandatory/give_arr.c\
	 push_mandatory/check_error.c push_mandatory/sort_5.c push_mandatory/ft_lst_print_arr.c push_mandatory/ft_average.c \
	 push_mandatory/biggest_smallest.c push_mandatory/find_first_best.c push_mandatory/give_best_one.c push_mandatory/give_cost.c \
	 push_mandatory/keep_3.c push_mandatory/push_to_a.c push_mandatory/best_move.c push_mandatory/push_swap.c

OBJ=$(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)

$(OBJ) :$(HEAD)

clean:
	make clean -C libft/
	rm -f $(OBJ)

fclean:clean
	rm -f ./libft/libft.a
	rm -f $(NAME)

re:fclean all
.PHONY:all clean fclean re

# bonus : $(NAME_B)

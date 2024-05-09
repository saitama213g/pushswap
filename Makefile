CC=cc
LIBFT=libft/ft_libft.h
HEAD= push_mandatory/push_mandatory.h
HEAD_BONUS= push_bonus/push_bonus.h
CFLAGS= -Wall -Wextra -Werror
NAME= push_swap
checker= checker
SRC = push_mandatory/free_linked.c push_mandatory/main.c push_mandatory/ft_instruction1.c push_mandatory/ft_instruction2.c push_mandatory/is_sorted.c\
	 push_mandatory/sort_3.c push_mandatory/ft_add_to_stack.c push_mandatory/ft_check_duplicate.c  push_mandatory/give_arr.c\
	 push_mandatory/check_error.c push_mandatory/sort_5.c push_mandatory/ft_lst_print_arr.c push_mandatory/ft_average.c \
	 push_mandatory/biggest_smallest.c push_mandatory/find_first_best.c push_mandatory/give_best_one.c push_mandatory/give_cost.c \
	 push_mandatory/keep_3.c push_mandatory/push_to_a.c push_mandatory/best_move.c push_mandatory/push_swap.c

SRC_BONUS = push_mandatory/give_arr.c push_mandatory/check_error.c push_mandatory/ft_check_duplicate.c push_mandatory/is_sorted.c \
			push_bonus/apply_instructions.c \
			push_bonus/main.c push_mandatory/free_linked.c push_mandatory/ft_add_to_stack.c push_mandatory/ft_lst_print_arr.c \
			push_mandatory/ft_instruction1.c push_mandatory/ft_instruction2.c push_bonus/new_instructions.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)

$(OBJ) :$(HEAD)
$(OBJ_BONUS) :$(HEAD_BONUS)

clean:
	make clean -C libft/
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)

fclean:clean
	rm -f ./libft/libft.a
	rm -f $(NAME)

re:fclean all
.PHONY:all clean fclean re

bonus: $(checker)

$(checker):$(OBJ_BONUS)
	@make -C libft/
	$(CC) $(CFLAGS) $(OBJ_BONUS) ./libft/libft.a -o $(checker)

# bonus : $(NAME_B)

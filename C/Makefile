PRNTF_SRC = ft_printf/ft_print_char.c ft_printf/ft_print_str.c ft_printf/ft_print_digit.c ft_printf/ft_printf.c \
	  ft_printf/ft_strlen.c ft_printf/ft_print_address.c ft_printf/ft_print_format.c
PRNTF_OBJ = $(PRNTF_SRC:.c=.o)
SRC = ft_split.c ft_instruction.c ft_lst_print_arr.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c\
		ft_atoi.c ft_list_add_front.c ft_lstlast_bonus.c
OBJ=$(SRC:.c=.o)
CC=cc
CFLAGS= -Wall -Wextra -Werror
HEAD_LIB = ft_libft
NAME = libft.a

all: $(NAME) push_swap

$(NAME):$(OBJ) ft_printf.o
	ar rcs $(NAME) $(OBJ) ft_printf.o

ft_printf.o: ft_printf.c $(PRNTF_SRC)
	$(CC) $(CFLAGS) -c ft_printf.c $(PRNTF_SRC) -o ft_printf.o

%.o:%.c $(HEAD_LIB) $(HEAD_PRINTF) 
	$(CC) $(CFLAGS) -c $< -o $@

push_swap: push_swap.c
	$(CC) $(CFLAGS) push_swap.c (NAME) -o push_swap

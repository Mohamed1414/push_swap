NAME = push_swap
SRCS = push_swap.c
OBJ =  $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror


%.o:%.c
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PONY: all clean fclean re

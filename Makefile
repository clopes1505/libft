SRC = *.c
OBJ = *.o
CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -c $(FLAGS)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf libft.a

re: fclean all


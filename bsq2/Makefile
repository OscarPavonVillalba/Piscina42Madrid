NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = functions.c ft_solution.c ft_find_solution.c ft_verifmap.c ft_readmap.c ft_getchars.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
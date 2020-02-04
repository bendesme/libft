NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=/bin/rm -rf
SRC=ft_atoi.c ft_isalnum.c ft_isdigit.c
OBJ=$(SRC:.c=.o)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
.PHONY: clean fclean

all: $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean 
	$(RM) $(NAME)
re: fclean all



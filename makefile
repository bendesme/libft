# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 18:32:28 by bdesmet           #+#    #+#              #
#    Updated: 2020/02/04 18:41:29 by bdesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=/bin/rm -rf
SRC=ft_atoi.c ft_isalnum.c ft_isdigit.c ft_bzero.c\
	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlcpy.c\
	ft_strlen.c  ft_strncmp.c ft_tolower.c ft_toupper.c
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



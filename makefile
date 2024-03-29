# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 18:32:28 by bdesmet           #+#    #+#              #
#    Updated: 2021/04/27 18:00:12 by bdesmet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=/bin/rm -rf
SRC=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c\
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJ=$(SRC:.c=.o)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
.PHONY: clean fclean

all: $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean 
	$(RM) $(NAME)
re: fclean all


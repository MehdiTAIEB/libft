# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:18:12 by mtaieb            #+#    #+#              #
#    Updated: 2016/11/27 16:16:46 by mtaieb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c \
	  ft_strdup.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_strcat.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_tolower.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strstr.c \
	  ft_toupper.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c

SRCI = -Iincludes

SRCO = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

all:
	gcc -c $(SRC) $(FLAGS) $(SRCI)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all

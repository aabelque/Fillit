#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 16:25:42 by dcirlig           #+#    #+#              #
#    Updated: 2017/12/14 12:41:07 by dcirlig          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAG = -Wextra -Wall -Werror

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
	ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c \
	ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_count_digit_number.c ft_count_ch.c \
	ft_count_word.c

OBJECTS = $(SRC:.c=.o)

HEADER = -I libft.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) $(HEADER)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

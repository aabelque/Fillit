#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcirlig <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 17:04:24 by dcirlig           #+#    #+#              #
#    Updated: 2017/12/18 10:24:35 by aabelque         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

FLAG = -Wall -Wextra -Werror

SRC = ft_fillit.c ft_resolv.c t_add.c rm_t.c ft_free_m.c ft_mv_tetr.c \
	ft_print_m.c ft_read.c ft_rec_coord.c ft_strlen.c ft_split_tetr.c \
	ft_putstr.c ft_putchar.c ft_create_m.c ft_tetr.c ft_check.c \
	ft_valid_map.c ft_valid_t.c ft_error.c

HEADER = -I fillit.h

OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@gcc $(FLAG) -o $(NAME) $(OBJECT) $(HEADER)
	@echo "Compiled succes"

%.o : %.c
	@gcc -c -o $@ $< $(HEADER)

clean:
	@rm -f $(OBJECT)
	@echo "All objects are deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "name deleted"

re: fclean all

.PHONY: all clean fclean re

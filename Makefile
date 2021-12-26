# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 12:38:08 by aboumadi          #+#    #+#              #
#    Updated: 2021/11/28 12:38:11 by aboumadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_LIST = ft_printf.c ft_putchar.c ft_putnbr_base10.c ft_putnbr_base10_ns2.c ft_strlen.c\
		   ft_putstr.c ft_hexa_min.c ft_hexa_max.c ft_px.c




OBJ = $(SRC_LIST:.c=.o)

INCLUDE =ft_printf.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c $(INCLUDE)
	gcc $(CFLAGS) -c $< -o $@
	
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re


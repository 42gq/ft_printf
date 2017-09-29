# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 05:42:43 by gquerre           #+#    #+#              #
#    Updated: 2017/09/29 05:38:31 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC  = ./*.c ./handlers/*.c ./apply/*.c

FLAG = -Wextra -Wall -Werror

SUPP = ./ft_printf.h ./SRC/libft/libft.a

OBJ = ./*.o

# -fsanitize=address after -c #

all: $(NAME)

$(NAME):
	make -C SRC/libft/
	gcc -I SRC/libft/libft.a -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.Phony: clean all fclean re

clean:
	rm -f $(OBJ)
	make clean -C SRC/libft/

fclean: clean
	rm -f $(NAME)
	make fclean -C SRC/libft/

re: fclean all

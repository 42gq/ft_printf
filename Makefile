# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 05:42:43 by gquerre           #+#    #+#              #
#    Updated: 2017/09/29 04:45:27 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC  = ./*.c ./handlers/*.c ./apply/*.c

FLAG = -Wextra -Wall -Werror

SUPP = ./ft_printf.h ./SRC/libft/libft.a

OBJ = ./*.o
# -fsanitize=address after -c #
$(NAME): SRC/libft/libft.a $(SRC)
	gcc -I $(SUPP) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

SRC/libft/libft.a:
	make fclean -C SRC/libft/
	make -C SRC/libft/

clean:
	rm -f $(OBJ)
	rm -f SRC/libft/libft.a

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

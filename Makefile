# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 05:42:43 by gquerre           #+#    #+#              #
#    Updated: 2017/09/25 03:49:38 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

SRC  = ./*.c ./handlers/*.c ./apply/*.c

FLAG = -Wextra -Wall -Werror

SUPP = ./ft_printf.h ./SRC/libft/libft.a

OBJ = ./*.o

all: $(NAME)

$(NAME): SRC/libft/libft.a $(SRC)
	gcc -I $(SUPP) -g -fsanitize=address $(SRC) -o $(NAME)

SRC/libft/libft.a:
	make fclean -C SRC/libft/
	make -C SRC/libft/

clean:
	rm -f $(OBJ)
	rm -f SRC/libft/libft.a

fclean: clean
	rm -f $(NAME)

re: fclean all

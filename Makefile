# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gquerre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 05:42:43 by gquerre           #+#    #+#              #
#    Updated: 2017/09/29 04:14:07 by gquerre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC  = ./*.c ./handlers/*.c ./apply/*.c

FLAG = -Wextra -Wall -Werror

SUPP = ./ft_printf.h ./SRC/libft/libft.a

OBJ = ./*.o

$(NAME): SRC/libft/libft.a $(SRC)
	gcc -I $(SUPP) -c -fsanitize=address $(SRC)
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

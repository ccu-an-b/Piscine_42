# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccu-an-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 13:36:48 by ccu-an-b          #+#    #+#              #
#    Updated: 2017/07/27 17:54:15 by ccu-an-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
SRC = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c \
./srcs/ft_strlen.c ./srcs/ft_strcmp.c 
HEADERS = ./includes
SRC_O = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

clean:
	$(CLEAN) $(SRC_O)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

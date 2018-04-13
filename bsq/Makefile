# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgounand <jgounand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 16:15:28 by jgounand          #+#    #+#              #
#    Updated: 2017/07/26 21:19:30 by ccu-an-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Werror -Wextra -Wall
SRC = ./srcs/main.c ./srcs/ft_read.c ./srcs/tools.c ./srcs/ft_bsq.c \
./srcs/ft_print.c ./srcs/ft_res.c ./srcs/ft_solver.c ./srcs/ft_str.c \
./srcs/ft_tab_int.c ./srcs/ft_collect_info.c ./srcs/ft_copy_check.c
HEADERS = ./includes
OBJS = main.o ft_read.o tools.o ft_bsq.o ft_print.o ft_res.o ft_solver.o \
ft_str.o ft_tab_int.o ft_copy_check.o ft_collect_info.o
NAME = bsq

all : $(NAME)

$(NAME) : 
	gcc $(CFLAGS) -c $(SRC) -I $(HEADERS)
	gcc $(OBJS) -o $(NAME)

clean :
		/bin/rm -f $(OBJS)
fclean : clean
		/bin/rm -f $(NAME)
re : fclean all

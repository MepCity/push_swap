# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 18:39:35 by yaarslan          #+#    #+#              #
#    Updated: 2025/04/16 18:39:39 by yaarslan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror 

SRC	=	actions/push_ab.c \
		actions/rev_rotate_ab.c \
		actions/rotate_ab.c \
		actions/swap_ab.c \
		push_swap.c \
		quicksort.c \
		sorting_functions.c \
		utils.c ft_error.c \
		free.c

OBJ = $(SRC:.c=.o)

FTPRINTF = ft_printf/libftprintf.a
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	make -C ft_printf
	make -C libft
	$(CC) $(FLAGS) $(OBJ) $(FTPRINTF) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make clean -C libft
	make clean -C ft_printf
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	make fclean -C ft_printf
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
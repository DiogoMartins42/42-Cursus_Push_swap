# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 13:55:49 by dmanuel-          #+#    #+#              #
#    Updated: 2023/04/18 14:43:53 by dmanuel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Werror -Wextra -O3 -g
DEPS= include/push_swap.h libft/libft.a

NAME=push_swap
SRC=src/push_stack.c src/push_swap.c src/quick_sort.c src/rev_rotate.c src/rotate.c \
	src/sort.c src/swap.c src/utils.c
OBJ=$(SRC:.c=.o)

LIBFT = libft/libft.a

all: deps $(NAME)
deps:
	@$(MAKE) -C ./libft
$(NAME): $(OBJ) $(DEPS)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
clean:
	@$(MAKE) $@ -C ./libft
	@rm -rf $(OBJ)
fclean: clean
	@$(MAKE) $@ -C ./libft
	@rm -rf $(NAME)
re: fclean all
	@$(MAKE) $@ -C ./libft

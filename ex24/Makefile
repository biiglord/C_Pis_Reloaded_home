# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/22 18:06:19 by filimigu          #+#    #+#              #
#    Updated: 2026/10/22 19:46:56 by filimigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc

HEADER_DIR	= includes/

CFLAGS		= -Wall -Wextra -Werror -I$(HEADER_DIR)

SRCS		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS		= $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
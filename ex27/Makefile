# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/23 12:51:15 by filimigu          #+#    #+#              #
#    Updated: 2026/10/23 16:27:52 by filimigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_display_file.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
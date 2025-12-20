# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 20:20:28 by aimalasi          #+#    #+#              #
#    Updated: 2025/12/18 23:15:19 by aimalasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_helper.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo 'Library created'
	@echo 'Functions compiled'

clean:
	@rm -f $(OBJS)
	@echo 'Objects clean'

fclean: clean
	@rm -f $(NAME)
	@echo 'Library clean'

re: fclean all

.PHONY: all clean fclean re
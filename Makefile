# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danperez <danperez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 10:37:45 by danperez          #+#    #+#              #
#    Updated: 2024/09/19 10:37:45 by danperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard ft_*.c)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME).a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME).a

re: fclean all
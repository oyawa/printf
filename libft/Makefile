# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oyawa <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/24 11:04:59 by oyawa             #+#    #+#              #
#    Updated: 2018/08/24 11:31:09 by oyawa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = clang

NAME = libft.a

FLAGS = -Wall -Wextra -Werror 

HEADER = libft.h

LIBFILES = $(SRC:.c=.o)

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_memchr.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_pow.c \
	  ft_strchr.c \
	  ft_strchri.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_wcharlen.c \
	  ft_wstrlen.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(LIBFILES)
	ranlib $(NAME)

clean:
	rm -f $(LIBFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

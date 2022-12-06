# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfavre <tfavre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 16:50:43 by timothy           #+#    #+#              #
#    Updated: 2022/12/05 17:55:26 by tfavre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

SRCS =	ft_printf.c		\

NAME = libftprintf.a
OBJS = ${SRCS:c=o}

CC = gcc
CC_FLAGS = -Wall -Werror -Wextra

AR = ar rcs
RM = rm -f

MAKE = make

%.o:		%.c
			${CC} ${CC_FLAGS} -c $<

${NAME}:	${OBJS}
			$(MAKE) all -C ./libft
			cp libft/libft.a ${NAME}
			${AR} $@ $?

all:		${NAME}

clean:
			${MAKE} clean -C ./libft
			${RM} ${OBJS}

fclean:		clean
			${MAKE} fclean -C ./libft
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timothy <timothy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 16:50:43 by timothy           #+#    #+#              #
#    Updated: 2024/01/14 18:18:10 by timothy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

SRCS =	ft_printf.c		\
		ft_utils.c		\

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}

CC = gcc
CC_FLAGS = -Wall -Werror -Wextra

AR = ar rcs
RM = rm -f

%.o:		%.c
			@${CC} ${CC_FLAGS} -c $<

${NAME}:	${OBJS}
			@make all -C ./libft
			@cp libft/libft.a ${NAME}
			@${AR} $@ $?

all:		${NAME}

clean:
			@make clean -C ./libft
			@${RM} ${OBJS}

fclean:		clean
			@make fclean -C ./libft
			@${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
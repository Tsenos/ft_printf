# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 16:50:43 by timothy           #+#    #+#              #
#    Updated: 2024/01/25 11:34:49 by tifavre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

SRCS =	ft_printf.c			\
		ft_putchari.c		\
		ft_putstri.c		\
		ft_putpointi.c		\
		ft_putnbri.c		\
		ft_putnbri_uns.c	\
		ft_puthexi.c

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timothy <timothy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 02:09:05 by timothy           #+#    #+#              #
#    Updated: 2024/01/13 19:29:08 by timothy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c			\
		ft_bzero.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_memcpy.c			\
		ft_memset.c			\
		ft_strlen.c			\
		ft_isprint.c		\
		ft_memmove.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_atoi.c			\
		ft_putchar_fd.c		\
		ft_putnbr_fd.c		\

NAME = libft.a
OBJS = ${SRCS:c=o}

CC = gcc
CC_FLAGS = -Wall -Werror -Wextra

AR = ar rcs
RM = rm -f

%.o:		%.c
			@${CC} ${CC_FLAGS} -c $<

${NAME}:	${OBJS}
			@${AR} $@ $?

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
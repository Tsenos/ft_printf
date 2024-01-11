# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 09:08:29 by tifavre           #+#    #+#              #
#    Updated: 2024/01/11 09:58:06 by tifavre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT	=	./libft/libft.a

SRCS	=	libftprintf.c	\

OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CCFLAGS	=	-Wall -Werror -Wextra
NAME	= 	libftprintf.a
ARRCS	=	ar -rcs
RM		=	rm -f
MAKE	=	make

%.o: %.c
	${CC} ${CCFLAGS} -c $< -o $@

all: ${NAME}
# cd SubDir1 && make $@

${NAME}: ${OBJS}
	${MAKE} clean -C ./libft
	cp libft/libft.a ${NAME}
	${ARRCS} ${NAME} ${OBJS}

clean:
	${MAKE} clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	${MAKE} clean -C ./libft
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

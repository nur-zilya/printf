# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfast <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 13:27:28 by hfast             #+#    #+#              #
#    Updated: 2021/11/09 13:27:30 by hfast            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_tolower.c \
				ft_toupper.c 

HEADER	=	libftprintf.h

OBJ		=	$(SRCS:.c=.o)

.c.o	:	${HEADER} ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all		:	${NAME} ${OBJ}

CC		:	gcc

CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

clean	:
			${RM} ${OBJ}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all

.PHONY	:	.c.o all clean fclean re

$(NAME)	:	$(OBJ) $(HEADER)
				ar rcs $(NAME)$?

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 20:56:59 by aball             #+#    #+#              #
#    Updated: 2021/10/28 20:57:07 by aball            ###   ########.ae        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = ft_printf.h

SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_printf.c ft_putnbr_uns.c ft_hex.c ft_strlen.c ft_hex_up.c ft_putaddress.c

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rsc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		@${RM} ${NAME}

re:		fclean all

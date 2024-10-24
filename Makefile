# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 17:33:54 by alisseye          #+#    #+#              #
#    Updated: 2024/10/24 14:10:43 by alisseye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printelem.c ft_printchar.c ft_printstr.c\
	ft_printptr.c ft_printnum.c ft_printunum.c ft_printhex.c\
	ft_printlhex.c ft_utoa.c ft_utox.c ft_ultox.c

OBJS = ${SRCS:.c=.o}

INCLUDES = ft_printf.h

LIBFT_PATH = libft

LIBFT = ${LIBFT_PATH}/libft.a

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

${NAME}: ${LIBFT} ${OBJS}
	ar rc ${NAME} ${OBJS}

${LIBFT}:
	make -C libft
	cp ${LIBFT} ${NAME}

all: ${NAME}
	
clean:
	make -C ${LIBFT_PATH} clean
	rm -f ${OBJS}

fclean: clean
	make -C ${LIBFT_PATH} fclean
	rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re 
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alisseye <alisseye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 17:33:54 by alisseye          #+#    #+#              #
#    Updated: 2024/09/28 22:09:41 by alisseye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = 

OBJS = ${SRCS:.c=.o}

INCLUDES = 

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

bonus: ${OBJS} ${BOBJS}
	ar rc ${NAME} ${OBJS} ${BOBJS}
	
clean:
	rm -f ${OBJS} ${BOBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msloot <msloot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 21:30:22 by msloot            #+#    #+#              #
#    Updated: 2023/09/22 22:02:17 by msloot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush02

CC		=	cc
RM		= 	rm -rf

CFLAGS	=	-Wall -Werror -Wextra

#CFLAGS	+=	-g

INC		=	./inc/

SRCS	=	./src/main.c \
			./src/ft_strlen.c ./src/ft_putstr.c ./src/ft_putchar.c

OBJS	=	$(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re

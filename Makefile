# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msloot <msloot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 21:30:22 by msloot            #+#    #+#              #
#    Updated: 2023/09/23 22:21:42 by msloot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

CC		=	cc
RM		= 	rm -rf

CFLAGS	=	-Wall -Werror -Wextra

#CFLAGS	+=	-g

INC		=	./inc/

SRCS	=	./src/main.c \
			./src/parse.c \
			./src/read.c \
			./src/error.c \
			./src/utils/ft_atoll.c \
			./src/utils/ft_strlen.c \
			./src/utils/ft_strcpy.c ./src/utils/ft_strcat.c \
			./src/utils/ft_strjoin.c ./src/utils/ft_strdup.c \
			./src/utils/ft_putstr.c ./src/utils/ft_putchar.c \

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

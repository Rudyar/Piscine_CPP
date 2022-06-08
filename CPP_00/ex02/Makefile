# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 19:30:25 by arudy             #+#    #+#              #
#    Updated: 2022/06/08 11:21:50 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

SRCS	= tests.cpp Account.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

RM		= rm -f

# CFLAGS	= -pedantic -Wall -Werror -Wextra -std=c++98
CFLAGS	= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

.cpp.o:
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

rc: re
	${RM} ${OBJS} && clear

.PHONY: all clean fclean re

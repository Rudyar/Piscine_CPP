# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 11:33:19 by arudy             #+#    #+#              #
#    Updated: 2022/06/09 09:20:40 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS	= main.cpp PhoneBook.cpp Contact.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

RM		= rm -f

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

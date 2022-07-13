# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 08:37:30 by jchauvet          #+#    #+#              #
#    Updated: 2022/07/13 14:44:17 by jchauvet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Account.cpp \
		tests.cpp

INCLUDES = includes

CXX = c++

NAME = Bank

CXXFLAGS = -Wall -Wextra -Werror -I${INCLUDES} -std=c++98

OBJS = ${SRCS:.cpp=.o}

all:${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re

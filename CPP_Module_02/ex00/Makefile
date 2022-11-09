# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:00:52 by hogkim            #+#    #+#              #
#    Updated: 2022/11/09 00:28:17 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	My_First_Class_in_Orthodox_Canonical_Form

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Fixed.cpp \
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

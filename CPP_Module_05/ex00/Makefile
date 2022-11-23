# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:00:52 by hogkim            #+#    #+#              #
#    Updated: 2022/11/23 13:43:24 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Mommy,_when_I_grow_up,_I_want_to_be_a_bureaucrat!

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Bureaucrat.cpp \
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

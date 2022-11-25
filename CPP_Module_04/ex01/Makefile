# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:00:52 by hogkim            #+#    #+#              #
#    Updated: 2022/11/25 11:57:51 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	I_don\'t_want_to_set_the_world_on_fire

CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Animal.cpp \
			Brain.cpp \
			Cat.cpp \
			Dog.cpp \
			main.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

OBJS	=	$(SRCS:.cpp=.o)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re

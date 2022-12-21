# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:00:52 by hogkim            #+#    #+#              #
#    Updated: 2022/12/21 15:38:37 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Repetitive_work

CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	ClapTrap.cpp \
			FragTrap.cpp \
			main.cpp \
			ScavTrap.cpp

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

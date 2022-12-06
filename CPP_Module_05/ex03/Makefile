# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:00:52 by hogkim            #+#    #+#              #
#    Updated: 2022/12/06 19:51:40 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	AForm.cpp \
				Bureaucrat.cpp \
				Intern.cpp \
				main.cpp \
				PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp

OBJS		=	$(SRCS:.cpp=.o)

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

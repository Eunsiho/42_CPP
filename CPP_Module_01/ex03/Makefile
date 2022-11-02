# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:00:52 by hogkim            #+#    #+#              #
#    Updated: 2022/11/02 21:35:09 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	HI_THIS_IS_BRAIN

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	HumanA.cpp \
			HumanB.cpp \
			main.cpp \
			Weapon.cpp

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

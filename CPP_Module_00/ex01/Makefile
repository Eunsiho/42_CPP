# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 00:21:04 by hogkim            #+#    #+#              #
#    Updated: 2022/11/04 00:21:04 by hogkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Contact.cpp \
			main.cpp \
			PhoneBook.cpp

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

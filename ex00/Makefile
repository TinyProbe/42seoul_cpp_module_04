# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 01:13:40 by tkong             #+#    #+#              #
#    Updated: 2023/02/24 09:55:52 by tkong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CPL = c++
OPT = -Wall -Wextra -Werror -std=c++98 -O2 -o $(NAME)
INC = Animal.hpp\
	  Dog.hpp\
	  Cat.hpp
SRC = Animal.cpp\
	  Dog.cpp\
	  Cat.cpp\
	  main.cpp

$(NAME): $(INC) $(SRC) Makefile
	$(CPL) $(OPT) $(SRC)

all: $(NAME)

clean:

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re

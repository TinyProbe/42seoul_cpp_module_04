# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 22:39:12 by tkong             #+#    #+#              #
#    Updated: 2023/02/16 03:12:28 by tkong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CPL = c++
OPT = -Wall -Wextra -Werror -std=c++98 -O2 -o $(NAME)
INC = AMateria.hpp\
	  Ice.hpp\
	  Cure.hpp\
	  ICharacter.hpp\
	  Character.hpp\
	  IMateriaSource.hpp\
	  MateriaSource.hpp
SRC = AMateria.cpp\
	  Ice.cpp\
	  Cure.cpp\
	  Character.cpp\
	  MateriaSource.cpp\
	  main.cpp

$(NAME): $(INC) $(SRC) Makefile
	$(CPL) $(OPT) $(SRC)

all: $(NAME)

clean:

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re

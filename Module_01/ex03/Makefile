# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 16:50:51 by achahdan          #+#    #+#              #
#    Updated: 2022/09/17 20:26:02 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Weapons
SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= Weapon.hpp HumanA.hpp HumanB.cpp
OBJ= $(SRC:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c $(INC)
		$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
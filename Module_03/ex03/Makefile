# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 16:38:05 by achahdan          #+#    #+#              #
#    Updated: 2022/09/22 21:23:59 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= DiamondTrap
SRC		= main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow 
INC		= FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
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
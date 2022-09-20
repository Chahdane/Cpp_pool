# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 16:38:05 by achahdan          #+#    #+#              #
#    Updated: 2022/09/20 16:52:16 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ClapTrap
SRC		= main.cpp ClapTrap.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= ClapTrap.hpp
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
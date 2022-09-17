# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 13:52:48 by achahdan          #+#    #+#              #
#    Updated: 2022/09/17 20:25:48 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= Zombie.hpp
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
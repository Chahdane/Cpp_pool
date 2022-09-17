# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 19:42:47 by achahdan          #+#    #+#              #
#    Updated: 2022/09/17 20:26:11 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl
SRC		= main.cpp Harl.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= Harl.hpp
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
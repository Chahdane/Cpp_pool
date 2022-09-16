# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 20:52:16 by achahdan          #+#    #+#              #
#    Updated: 2022/09/16 20:55:19 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harlFilter
SRC		= main.cpp Harl.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror
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
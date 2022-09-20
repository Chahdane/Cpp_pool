# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 16:20:23 by achahdan          #+#    #+#              #
#    Updated: 2022/09/18 16:52:35 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
SRC		= main.cpp Fixed.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= Fixed.hpp
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
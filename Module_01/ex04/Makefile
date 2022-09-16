# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 14:19:49 by achahdan          #+#    #+#              #
#    Updated: 2022/09/16 19:43:59 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace
SRC		= main.cpp Replace.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror
INC	= Replace.hpp
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
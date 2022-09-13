# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 19:26:12 by achahdan          #+#    #+#              #
#    Updated: 2022/09/13 23:12:16 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebool
SRC		= phonebook.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror
INC		= phonebook.hpp
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

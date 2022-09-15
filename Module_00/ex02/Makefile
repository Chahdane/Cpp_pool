# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 01:19:57 by achahdan          #+#    #+#              #
#    Updated: 2022/09/15 02:26:31 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= acc
SRC		= tests.cpp Account.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror
INC		= Account.hpp
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

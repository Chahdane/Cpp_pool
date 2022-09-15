# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 16:42:45 by achahdan          #+#    #+#              #
#    Updated: 2022/09/15 16:43:09 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= string
SRC		= main.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror
#INC	= 
OBJ= $(SRC:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c
		$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
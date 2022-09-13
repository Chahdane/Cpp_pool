# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 16:49:21 by achahdan          #+#    #+#              #
#    Updated: 2022/09/13 17:39:33 by achahdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SRC		= megaphone.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror
#INC	=
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

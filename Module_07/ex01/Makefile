NAME	= iter
SRC		= main.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= iter.hpp 
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
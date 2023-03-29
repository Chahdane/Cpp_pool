NAME	= ClapTrap
SRC		= main.cpp ClapTrap.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= ClapTrap.hpp
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
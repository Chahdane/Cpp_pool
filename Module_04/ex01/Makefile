NAME	= brains
rhs		= main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
CC 		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= Brain.hpp Cat.hpp Dog.hpp Animal.hpp
OBJ= $(rhs:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(rhs) -o $(NAME)

%.o: %.c $(INC)
		$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
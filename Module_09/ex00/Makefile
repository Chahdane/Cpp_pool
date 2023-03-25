NAME	= btc
SRC		= main.cpp BitcoinExchange.cpp 
CC 		= c++
FLAGS	= -std=c++98
INC		= BitcoinExchange.hpp 
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
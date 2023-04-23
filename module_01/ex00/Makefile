NAME =	Brain
CC =	c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp Zombie.cpp randomChump.cpp newZombie.cpp 
OBJ =	$(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME: $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean

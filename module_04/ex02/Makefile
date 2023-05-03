PRG = Animal
CC = c++
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(PRG): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(PRG) $(OBJ)

all: $(PRG)

clean:
	rm -f $(OBJ) $(PRG)

fclean: clean
	rm -f $(PRG)

re: fclean all

.PHONY: all clean fclean re

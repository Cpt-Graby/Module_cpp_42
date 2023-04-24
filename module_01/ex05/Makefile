
PRG =	complain

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME: $(OBJ)
	$(CC) $(CFLAGS) -o $(PRG) $(OBJ)

all: $(PRG)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(PRG)

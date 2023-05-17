NAME = Bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98
SRC = main.cpp \
	  Bureaucrat.cpp \
	  Form.cpp 

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re

NAME = Conversion

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

NAME: $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

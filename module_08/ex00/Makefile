NAME = easyfind

CC = c++

CFLAGS = -Wall -Werror -Wextra

FILES = main.cpp

OBJS = $(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: clean fclean

.PHONY: all clean fclean re


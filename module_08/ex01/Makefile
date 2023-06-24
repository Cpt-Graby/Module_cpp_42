NAME = Span
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp \
	   Span.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

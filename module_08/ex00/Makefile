NAME = EXEC

CC = c++

CFLAGS = -Wall -Werror -Wextra -petandic -stdc++=98 -Wnon-virtual-dtor -Wpedantic 

SRCS = main.cpp

OBJS =  $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

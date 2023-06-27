NAME = btc

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

RM = rm -rf

SRCS = main.cpp \
	   Bitcoinexchange.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

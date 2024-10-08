CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Weapon

SRCS = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
NAME = Harl 2.0
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = -I./include

SRCS = 	src/main.cpp \
		src/Zombie.cpp \
		src/newZombie.cpp \
		src/randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY : all
all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

.PHONY: debug
debug:
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

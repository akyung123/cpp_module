NAME = string
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	src/main.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY : all
all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

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

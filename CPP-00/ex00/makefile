NAME = megaphone
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = -I./$(INC_DIR)

# directoriex
SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/

# source files
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all
all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
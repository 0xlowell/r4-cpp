

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC     = c++ $(CFLAGS)
OBJ    = Constructor_Destructor.o main.o
NAME   = Constructor_Destructor
LIB = -ledit

.cpp.o:
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

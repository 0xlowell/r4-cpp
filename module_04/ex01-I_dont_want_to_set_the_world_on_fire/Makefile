

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g3
CC     = c++ $(CFLAGS)
OBJ    = main.o Animal.o Dog.o Cat.o WrongAnimal.o WrongCat.o Brain.o
NAME   = Animal_with_Brain
LIB = -ledit

.cpp.o:
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)
	@printf "✅ Compiled\n";

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@printf "🧹 Clean\n";

re: fclean all

.PHONY: all clean fclean re

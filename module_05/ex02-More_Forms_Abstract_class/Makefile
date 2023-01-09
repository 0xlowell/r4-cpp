

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g3
CC     = c++ $(CFLAGS)
OBJ    = main.o Bureaucrat.o AForm.o PresidentialPardonForm.o RobotomRequestForm.o ShrubberyCreationForm.o
NAME   = Bureaucrat
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

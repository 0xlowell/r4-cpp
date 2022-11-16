#_______________ SRCS

SRCS_DIR	= .
SRCS_FILES	= main.cpp phoneBook.cpp contact.cpp
SRCS		= ${patsubst %, ${SRCS_DIR}%, ${SRCS_FILES}}

#_______________ OBJS

O_DIR           = ./objs/
OBJS_FILES		:= ${SRCS_FILES:.cpp=.o}
OBJS			:= ${patsubst %, ${O_DIR}%, ${OBJS_FILES}}

#_______________ RULES

NAME			= phoneBook
CC				= c++
MKDIR           = mkdir
RM              = rm -rf
CPP_FLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic



#_______________ COMMANDS

all:			${NAME}

${NAME}:		${O_DIR} ${OBJS}
				@printf "all \n"
				@${CC} ${CPP_FLAGS} -o ${NAME} ${OBJS}

${O_DIR}:
				@${MKDIR} ${O_DIR}

${O_DIR}%.o:%.cpp
				@${CC} ${CPP_FLAGS} -o $@ -c $<

clean :
				@${RM} ${O_DIR}
				@printf "clean \n"

fclean :
				@${RM} ${O_DIR}
				@${RM} ${NAME}
				@printf "full clean \n"

re : 			fclean all

.PHONY : all clean fclean re norm
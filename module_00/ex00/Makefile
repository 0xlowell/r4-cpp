#_______________ COLORS

GREEN	= \033[1;32m
RED 	= \033[1;31m
ORANGE	= \033[1;33m
BUILD	= \e[38;5;225m
SEP		= \e[38;5;120m
DUCK	= \e[38;5;227m
RESET	= \033[0m

#_______________ SRCS

SRCS_DIR	= .
SRCS_FILES	= megaphone.cpp

SRCS		= ${patsubst %, ${SRCS_DIR}%, ${SRCS_FILES}}

#_______________ OBJS

O_DIR           = ./objs/
OBJS_FILES		:= ${SRCS_FILES:.cpp=.o}

OBJS			:= ${patsubst %, ${O_DIR}%, ${OBJS_FILES}}

#_______________ RULES

NAME			= megaphone
CC				= c++
AR              = ar rcs
MKDIR           = mkdir
RM              = rm -rf
CPP_FLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic



#_______________ COMMANDS

all:			${NAME}

${NAME}:		${O_DIR} ${OBJS}
				@printf "\n"
				@printf "${GREEN} Compiled ${NAME} .o's${RESET}\n"
				@${CC} ${CPP_FLAGS} -o ${NAME} ${OBJS}

${O_DIR}:
				@${MKDIR} ${O_DIR}
				@printf "\n${BUILD}${O_DIR} Created ${RESET}\n\n"

${O_DIR}%.o:%.cpp
				@${CC} ${CPP_FLAGS} -o $@ -c $<
				@printf "\e[1K\r${BUILD} $@ from $<${RESET}"


clean :
				@${RM} ${O_DIR}
				@printf "${RED} 🧹 Clean ${RESET}\n"

fclean :
				@${RM} ${O_DIR}
				@printf "${RED} Full clean ${RESET}\n"
				@${RM} ${NAME}
				@printf "${RED} Full clean ${NAME} files${RESET} \n"

re : 			fclean all

.PHONY : all clean fclean re norm
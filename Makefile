##
## Trade
##

CC=				g++

NAME=				trade

INCLUDES=			-I core/headers/ \
				-I class/headers/ \

CPPFLAGS=			-O3 -W -Wall -Wextra $(INCLUDES)

SRC=				core/src/main.cpp\

OBJ=				$(SRC:.cpp=.o)

RM=				rm -f

all:				$(NAME)

$(NAME):			$(OBJ)
				$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
				$(RM) $(OBJ)

fclean:				clean
				$(RM) $(NAME)

re:				fclean all

count:
				cat $(SRC) | wc -l

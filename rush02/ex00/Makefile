NAME = rush-02

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

SRC = main.c, make_num.c, search_num.c
OBJ = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)      
%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

g: all
	./$(NAME)
b: all
	./$(NAME)
re: fclean all

.PHONY: all clean fclean re

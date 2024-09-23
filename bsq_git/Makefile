# Nombre del ejecutable
NAME = bsq
# Archivos fuente
SRC = read_txt.c
# Archivos objeto
OBJ = $(SRC:.c=.o)
# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Reglas especiales
.PHONY: all clean fclean re
# Regla por defecto, compila el ejecutable
all: $(NAME)
# Regla para compilar el ejecutable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
# Regla para compilar archivos .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# Regla para limpiar archivos objeto
clean:
	rm -f $(OBJ)
# Regla para limpiar todo (ejecutable y archivos objeto)
fclean: clean
	rm -f $(NAME)
# Regla para recompilar desde cero
re: fclean all

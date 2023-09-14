# Variables
CC = gcc 						# Compiler
CFLAGS = -Wall -Wextra -Werror	# Flags for compiler
SRC  = file1.c file2.c file3.c	# Source files
OBJ = $(SRC:.c=.o)				# Object files
#takes the value stored in the variable SRC and performs a substitution operation. 
#It replaces the .c extension of each source code file with the .o extension to 
# create a corresponding object file name.

NAME = libft.a					# Name of the static library

# Default target
all: $(NAME)

# Create object files from C files (implicit rule for building .o files from .c files.)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# source file you want to compile into an object file. $<
# object file should be named the same as the target. $@

# Create a static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Remove object files
# Remove all files ending in .o
clean:
	rm -f $(OBJ)

# Remove all generated files
# Remove all files ending in .o and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the project
# Remove all files ending in .o and the library, then build the project again
re: fclean all

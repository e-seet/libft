# Variables
CC = gcc 						# Compiler
CFLAGS = -Wall -Wextra -Werror	# Flags for compiler

# Source File (bonus from lstnew to lstmap)
SRC =	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c \
ft_strlen.c			ft_memset.c		ft_bzero.c			ft_memcpy.c		ft_memmove.c\
ft_strlcpy.c		ft_strlcat.c	ft_tolower.c		ft_toupper.c	ft_strchr.c\
ft_strrchr.c		ft_strncmp.c 	ft_memchr.c			ft_memcmp.c		ft_strnstr.c\
ft_atoi.c			ft_calloc.c		ft_strdup.c\
extra/ft_substr.c		extra/ft_strjoin.c	extra/ft_strtrim.c		extra/ft_split.c\
extra/ft_itoa.c			extra/ft_strmapi.c	extra/ft_striteri.c		extra/ft_putchar_fd.c\
extra/ft_putstr_fd.c	extra/ft_putendl_fd.c		extra/ft_putnbr_fd.c\
bonus/ft_lstnew.c			bonus/ft_lstadd_front.c	bonus/ft_lstsize.c		bonus/ft_lstlast.c	bonus/ft_lstadd_back.c\
bonus/ft_lstdelone.c		bonus/ft_lstclear.c		bonus/ft_lstiter.c		bonus/ft_lstmap.c

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
# ar rc
# The ar command is used to create the library (mylibrary) from the object files.
#r (option): This option tells ar to insert the specified files into the archive. If the files already exist in the archive, they will be replaced. If they don't exist, they will be added to the archive. This option is used for updating or adding files to an existing archive.
#c (option): This option tells ar to create the archive if it doesn't already exist. If the archive file doesn't exist, it will be created. If it does exist, this option has no effect.
#ranlib command is used to generate the index for the library, making it more efficient for linking.
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib ${NAME}

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

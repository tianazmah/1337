
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = del
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c \
ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_strrchr.c ft_toupper.c\
ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c\
ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_split.c ft_itoa.c ft_strtrim.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)
clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME) 

re: fclean all

.PHONY: clean fclean re
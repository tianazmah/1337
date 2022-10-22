
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isprint.c\
ft_isdigit.c\
ft_isascii.c\
ft_itoa.c\
ft_memchr.c\
ft_memcpy.c\
ft_memset.c\
ft_memcmp.c\
ft_memmove.c\
ft_split.c\
ft_strlcat.c\
ft_strlen.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strchr.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strdup.c\
ft_strncmp.c\
ft_strlcat.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\
ft_strmapi.c\
ft_striteri.c\
ft_strjoin.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c
BNS = ft_lstnew_bonus.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		echo "hna"
%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all:  $(NAME)
		touch all
clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME) 

re: fclean all

.PHONY: clean fclean re
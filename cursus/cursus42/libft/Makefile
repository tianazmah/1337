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
OBJ = $(SRC:.c=.o)

BNSSRC = ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstiter.c\
ft_lstmap.c
BNSOBJ = $(BNSSRC:.c=.o)
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all:  $(NAME)
bonus: all $(BNSOBJ)J
		ar rc $(NAME) $(BNSOBJ)
clean:
		$(RM) $(OBJ) $(BNSOB)
fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
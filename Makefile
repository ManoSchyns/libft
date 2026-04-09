NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_strlcpy.c ft_substr.c ft_strjoin.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	cc -c $(FLAGS) $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
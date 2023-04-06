NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c \
ft_strrchr.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_memset.c ft_memcpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_bzero.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

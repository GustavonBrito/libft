CC = gcc

HEADER = ./

SRCS = ft_atoi.c	ft_toupper.c	ft_tolower.c	ft_isascii.c	ft_isdigit.c	ft_strncmp.c	ft_isalpha.c	ft_isalnum.c	ft_isprint.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wall -Wextra -I $(HEADER)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
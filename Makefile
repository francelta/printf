NAME=libftprintf.a

SRCS=ft_printf.c ft_print_hexs.c ft_print_pointers.c ft_print_numbers.c
OBJS=$(SRCS:.c=.o)


CC=gcc
CFLAGS=-Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
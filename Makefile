NAME=libft.a

SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:%.c=%.o)

CFLAGS=-Wall -Werror -Wextra
CC=cc
AR=ar crs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I.

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
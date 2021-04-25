CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
.PHONY: all clean fclean $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs libft.a $(OBJS) 
.c.o:
	$(CC) $(CFLAGS) -c $<  -o $@
# so:
# 	$(CC) -fPIC -c $(CFLAGS) $(SRCS)
# 	gcc -shared -o libft.so $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all


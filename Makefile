CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
.PHONY: all $(NAME) clean fclean 

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 
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


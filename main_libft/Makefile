CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . ! -name "*_bonus.c" -name "*.c")
OBJS = $(SRCS:.c=.o)
BNS = $(wildcard *_bonus.c)
BNO = $(BNS:.c=.o)
NAME = libft.a
.PHONY: all $(NAME) clean fclean bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
bonus: $(BNO)
	ar rcs $(NAME) $(OBJS) $(BNO)
.c.o:
	$(CC) $(CFLAGS) -c $<  -o $@
clean:
	rm -f $(OBJS) $(BNO)
fclean: clean
	rm -f $(NAME)
re: fclean all 

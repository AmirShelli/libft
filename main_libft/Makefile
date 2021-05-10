FLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . ! -name "ft_lst*.c" -name "*.c")
OBJS = $(SRCS:.c=.o)
HEADER = libft.h
BNS = $(wildcard ft_lst*.c)
BNO = $(BNS:.c=.o)
NAME = libft.a
.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
bonus: $(BNO)
	@make OBJS:="$(OBJS) $(BNO)" $(NAME)
.c.o: $(HEADER) $(BNS) $(SRCS)
	gcc $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(BNO)
fclean: clean
	rm -f $(NAME)
re: fclean all 

CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I libft.h
SRCS = (wildcar *.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
.PHONY: all clean fclean $(NAME)

all: $(NAME)

$(NAME): $(OBJS) 
         ar rcs $(NAME) $(OBJS) 
.c.o:
        $(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@
clean:
        rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all


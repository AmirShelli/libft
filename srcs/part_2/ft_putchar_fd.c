#include<stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
	read(fd, c, 1);
}
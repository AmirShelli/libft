#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	int i;

	while( i <= n)
	{
		((char *)s)[i] = '\0';
		(s)++;
		i++;
	}
	return (s);
}

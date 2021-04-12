#include <cstdio>

void ft_bzero(void *s, size_t n)
{
	int i;

	while( i <= n)
	{
		((char *)s)[i] = '\0';
		((char *)s)++;
		i++;
	}
	return (((char *)s));
}

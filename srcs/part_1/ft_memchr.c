#include <cstdio>

void *ft_memchr(const void *src, int c, size_t n)
{
	while( *((char *)src) && n-- && *((char *)src) == c)
	{
		((char *)src)++;
	}
	return (((char *)src));
}
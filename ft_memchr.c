#include "libft.h"

void *ft_memchr(const void *src, int c, size_t n)
{
	while( *((char *)src) && n-- && *((char *)src) == c)
	{
		(src)++;
	}
	return ((char *)src);
}
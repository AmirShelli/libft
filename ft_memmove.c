#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	while( *((char *)src) && *((char *)dest) && n--)
	{
		*((char *)dest) = *((char *)src);
		(src)++;
		(dest)++;
	}
	return (dest);
}
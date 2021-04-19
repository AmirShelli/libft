#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	while( i <= n && ((char *)src)[i] != c)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (((char *)dest));
}
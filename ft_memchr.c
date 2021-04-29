#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*aux;

	aux = (unsigned char *)src;
	while (n--)
	{
		if (*aux == (unsigned char)c)
			return (aux);
		aux++;
	}
	return (NULL);
}

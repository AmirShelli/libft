#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*aux1;
	unsigned const char	*aux2;

	aux1 = dest;
	aux2 = src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*aux1++ = *aux2++;
	return (dest);
}
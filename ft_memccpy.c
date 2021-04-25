#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*aux1;
	const unsigned char	*aux2;

	aux1 = dest;
	aux2 = src;
	if (!n || dest == src)
		return (dest);
	while (n--)
	{	
		*aux1 = *aux2;
		if (*aux2 == (unsigned char)c)
		{	
			aux2++;
			return (dest);
		}
		aux1++;
		aux2++;
	}
	return (NULL);
}

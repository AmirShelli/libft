#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while (n--)
	{
		if (*aux1 != *aux2)
			return ((unsigned char)*aux1 - (unsigned char)*aux2);
		aux1++;
		aux2++;
	}
	return (0);
}

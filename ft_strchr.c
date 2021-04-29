#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	char	*aux;

	aux = (char *)src;
	while (*aux != c && *aux)
		aux++;
	if (*aux == (char)c)
		return (aux);
	return (NULL);
}

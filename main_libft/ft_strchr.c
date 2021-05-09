#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	char	*aux;

	aux = (char *)src;
	while (*aux && *aux != c)
		aux++;
	if (*aux == c)
		return (aux);
	return (NULL);
}

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	*aux;
	char	*ptr;

	ptr = (char *)src;
	aux = (char *)src;
	while (*ptr)
	{
		if (*ptr == (char)c)
			aux = (char *)ptr;
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	if (*aux == (char)c)
		return (aux);
	return (NULL);
}

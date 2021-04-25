#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char	*aux;
	int i;

	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}

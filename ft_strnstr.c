#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	char	*aux_big;
	char	*aux_small;
	int		check;

	check = 0;
	if (!(*small))
		return (big);
	while (*big && n--)
	{
		aux_big = big;
		aux_small = small;
		while (*aux_big == *aux_small && *aux_small)
		{
			aux_big = big;
			aux_big++;
			aux_small++;
		}
		if (!(*aux_small))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

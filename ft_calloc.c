#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*anything;

	anything = malloc(nmemb * size);
	if (!anything)
		return (NULL);
	ft_bzero(anything, size * nmemb);
	return (anything);
}

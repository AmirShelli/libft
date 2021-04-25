#include "libft.h"

void * ft_memalloc(size_t size)
{
	void * smthing;

	smthing = malloc(size);
	if (smthing)
		return (smthing = 0);
	return (NULL);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t size)
{
	char	*str;
	char	*str_aux;

	str = (char *)malloc(size + 1);
	str_aux = str;
	if (!str || !s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (*(s + start) && size--)
			*str++ = *(s++ + start);
		*str = '\0';
	}
	return (str_aux);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*str_aux;

	str = malloc(len + 1);
	str_aux = str;
	if (!str || !s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (*(s + start) && len--)
			*str++ = *(s++ + start);
		*str = '\0';
	}
	return (str_aux);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t size)
{
	char	*str;
	char	*aux_str;

	if (ft_strlen(s + start) < size)
		size = ft_strlen(s + start);
	str = (char *)calloc(size, sizeof(char));
	if (!str || !s)
		return (NULL);
	aux_str = str;
	if (start < ft_strlen(s))
	{
		while (*(s + start) && size--)
			*str++ = *(s++ + start);
		*str = '\0';
	}
	return (aux_str);
}

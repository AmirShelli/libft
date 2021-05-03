#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if( !(str = malloc(len + 1)))
		return (NULL);
	while(*s && len--)
		*str++ = *s++;
	*str = '\0';
	return (str);
}
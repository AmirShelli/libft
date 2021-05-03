#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' \
		|| c == '\v' || c == '\f' || c == '\r');
}

char	*ft_strtrim(char const *s)
{
	size_t		size;
	char		*result;

	if (!s)
		return (NULL);
	while (*s && ft_isspace(*s))
		s++;
	size = ft_strlen(s);
	while (size && ft_isspace(*s))
		size--;
	result = ft_strsub(result, s, size + 1);
	return (result);
}
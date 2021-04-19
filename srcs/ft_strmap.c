#include "libft.h"

static int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char * ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	if (!s || !(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <cstdio>
#include <stdlib.h>

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	if( !(str = malloc(len + 1)))
		return (NULL);
	i = 0;
	while(s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
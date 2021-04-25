#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *res;
 
	if(!(res = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1)))
		return (NULL);
	while (*s1)
	{
		*res = *s1;
		res++;
		s1++;
	}
	while (*s2)
	{
		*res = *s2;
		res++;
		s2++;
	}
	*res = '\0';
	return (res);
}

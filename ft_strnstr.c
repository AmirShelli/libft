#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	char *aux1;
	char *aux2;

	aux1 = (char *)str1;
	aux2 = (char *)str2;
	while(*str1 && *str2 && n--)
	{
		if(*aux1 == *str2)
		{	
			str2++;
			aux1++;
		}
		else
		{
			str2 = aux2;
			str1++;
			aux1 = (char *)str1;
		}
	}
	return ((char *)str1);
}
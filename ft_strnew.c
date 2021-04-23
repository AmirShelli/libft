#include "libft.h"

char * ft_strnew(size_t size)
{
	char *str;
	int i;

	str = (char *)malloc(size);
	i = 0;
	if (str)
	{
		while( i < size)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}	
	return (NULL);
}
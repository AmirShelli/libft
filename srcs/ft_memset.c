 #include "libft.h"


 void *memset(void *str, int c, size_t n)
 {
	while(n-- && *((char *)str))
	{
		*((char *)str) = c;
		(str)++;
	}
	return (str);
 }

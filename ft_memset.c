 #include "libft.h"

 void	*ft_memset(void *str, int c, size_t n)
 {
	char	*aux;
	
	aux = str;
	while (n--)
	{
		*aux = c;
		aux++;
	}
	return (str);
 }


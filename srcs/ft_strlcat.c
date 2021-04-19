#include "libft.h"

char	*ft_strlcpy(char *dest, char *src, size_t n)
{
    unsigned int i;

    i = 0;
    while ( (i < n) && (src[i]) ) 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
#include <cstdio>

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}


char			*ft_itoa(int n)
{
	char	*str;
	size_t size;

	size = ft_intlen(n);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	else
		str[size] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		return (str[0] = '0');
	while (n)
	{
		str[--size] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
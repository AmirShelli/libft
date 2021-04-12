#include <cstdio>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]) && (i < n))
	{
		i++;
	}
	return (s1[i] == s2[i]);
}
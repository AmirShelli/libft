#include <stdio.h>
int	ft_strncmp(char *s_st, char *s_nd, unsigned int n)
{
	unsigned int	i;
	unsigned char	*aux_st;
	unsigned char	*aux_nd;

	i = 0;
	aux_st = (unsigned char *)s_st;
	aux_nd = (unsigned char *)s_nd;
	while (aux_st[i] == aux_nd[i] && aux_st[i] && aux_nd[i] && i < n - 1)
		i++;
	return (aux_st[i] - aux_nd[i]);
}

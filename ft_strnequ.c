#include "libft.h"

int	ft_strnequ(char const *s_st, char const *s_nd, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!s_st || !s_nd)
		return (0);
	while ((s_st[i] == s_nd[i]) && (s_st[i]) && (s_nd[i]) && (i < n))
		i++;
	return (s_st[i] == s_nd[i]);
}

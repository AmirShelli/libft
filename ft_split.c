#include "libft.h"

static void	ft_skipspl(char **str, char spl)
{
	while (**str && **str == spl)
		(*str)++;
}

int	ft_firstlen(char *str, char spl)
{
	int	wordlen;

	wordlen = 0;
	while (*str && *str != spl)
	{
		wordlen++;
		str++;
	}
	return (wordlen);
}

static int	ft_countwords(char *str, char spl)
{
	int	n_words;

	n_words = 0;
	while (*str)
	{	
		ft_skipspl(&str, spl);
		if (*str)
		{
			n_words++;
			str = str + ft_firstlen(str, spl);
		}
	}
	return (n_words);
}

char	**ft_split(char *str, char spl)
{
	char	**splitted;
	int		n_words;
	int		fstwordlen;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	n_words = ft_countwords(str, spl);
	splitted = (char **)malloc((n_words + 1) * sizeof(char **));
	if (!splitted)
		return (NULL);
	while (n_words--)
	{
		ft_skipspl(&str, spl);
		if (*str)
		{
			fstwordlen = ft_firstlen(str, spl);
			splitted[i++] = ft_substr(str, 0, fstwordlen);
			str = str + fstwordlen;
		}
	}
	splitted[i] = NULL;
	return (splitted);
}

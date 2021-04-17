static int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_isspace(char c)
{
	return (c == ' ');
}

void ft_skipstr(char **str, int (*ft_is)(char c), int check)
{
	while(**str && (ft_is(**str) - check)) //0-1 = true, 1-1 = false
		(*str)++;
}

static char	*ft_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';	
	return(start);	
}

char * ft_strtrim(char const *s)
{
	char *res;
	int size;
	
	ft_skipstr(&s, &ft_isspace, 0);
	size = ft_strlen(s);
	res = (char *)malloc(size + 1);
	ft_strcpy(res, s);
	while (!ft_isspace(res[--size]))
		res[size] = '\0';
	return (res);
}
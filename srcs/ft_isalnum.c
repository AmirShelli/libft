static int		ft_isalpha(char c)
{
	return ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z'));
}

static int		ft_isdigit(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int ft_isalnum(int x)
{
	return (ft_isalpha || ft_isdigit);
}
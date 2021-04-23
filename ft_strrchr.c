char *ft_strchr(const char *src, int c)
{
	char *aux;

	aux = src;
	while(*src)
	{
		src++;
		if (*src == c)
			aux = src;
	}

	return (*src ? src : aux);
}
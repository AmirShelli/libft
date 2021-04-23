char *ft_strrchr(const char *src, int c)
{
	char *aux;

	aux = (char *)src;
	while(*src)
	{
		src++;
		if (*src == c)
			aux = (char *)src;
	}

	return ((*src) ? (char *)(src) : aux);
}
char *ft_strchr(const char *src, int c)
{
	while( *src && (*src == c))
	{
		src++;
	}
	return ((char *)src);
}
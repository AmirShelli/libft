int ft_toupper(int c)
{
	return (((c >= 'A') && (c <= 'Z')) ? c : c + 32);
}
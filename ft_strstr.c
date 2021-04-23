char * strstr (char * str1, const char * str2 )
{
	char *aux1;
	char *aux2;

	aux1 = (char *)str1;
	aux2 = (char *)str2;
	while(*str1 && *str2)
	{
		if(*aux1 == *str2)
		{	
			str2++;
			aux1++;
		}
		else
		{
			str2 = aux2;
			str1++;
			aux1 = str1;
		}
	}
	return (str1);
}
#include <stdio.h>
#include <stdlib.h>
int ft_isspace(char c)
{
	return (c == ' ');
}

void ft_skipstr(char **str, int (*ft_is)(char c), int check)
{
	while(**str && (ft_is(**str) - check))
	{
		(*str)++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((i < n) && (src[i])) 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int ft_words(char* str)
{
  int result = 0;
  
	while(*str)
	{
    	ft_skipstr(&str, &ft_isspace, 0);
    	if(*str)
		{
    		result++;
    		ft_skipstr(&str, &ft_isspace, 1); //0-1 = true, 1-1 = false
		} 
	}
  
  return (result);
}

int ft_fwordlen(char* str)
{
	int result = 0;
	while (*str && *str != ' ')
	{
		result++;
		str++;
	}
	return (result);
}

char **ft_split(char* str)
{
  char** result = (char **)malloc(ft_words(str));
  int i = 0;
  while(ft_words(str))
  {
    ft_skipstr(&str, &ft_isspace, 0);
    
	if(ft_words(str))
	{
		result[i] = malloc(ft_fwordlen(str) + 1);
    	ft_strncpy(result[i], str, ft_fwordlen(str));
    	ft_skipstr(&str, &ft_isspace, 1);
		i++;
	}
  }
  return (result);
}

int main()
{
	char *str = "hello world I am Here   to tes Ify5 YO$$.";
	printf("%d->%s|%s|%s\n", ft_words(str), (ft_split(str))[0], 
		(ft_split(str))[3], (ft_split(str))[8]);
}
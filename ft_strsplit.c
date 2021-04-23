#include "libft.h"

static int ft_isspace(char c)
{
	return (c == ' ');
}

static void ft_skipstr(char **str, int (*ft_is)(char c), int check)
{
	while(**str && (ft_is(**str) - check)) //0-1 = true, 1-1 = false
		(*str)++;
}

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((i < n) && (*src)) 
    {
        dest[i] = *src;
		src++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

static int ft_words(char* str)
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

static int ft_fwordlen(char* str)
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
  char** aux;
  int i;

  aux = result;
  i = 0;
  while(ft_words(str))
  {
    ft_skipstr(&str, &ft_isspace, 0); 

	if(ft_words(str))
	{
		*result = (char *)malloc(ft_fwordlen(str) + 1);
    	ft_strncpy(*result, str, ft_fwordlen(str));
    	ft_skipstr(&str, &ft_isspace, 1);
		printf("%s\n",  *result);
		result++;
	}
  }
  return (aux);
}

void disp_arr(char **arr, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%s\n",  arr[i]);
		i++;
	}
}

int main()
{
	char *str = " 5 hello l hey ";
	char** result = ft_split(str);
	printf("number of words %d\n", ft_words(str));
	disp_arr(result, ft_words(str));
}
#include "libft.h"

int sslen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while(*s)
	{
		if(*s == c)
		{
			i++;
		}
		else
		{
			len++;
		}
		s++;
	}
	return (len);
}

char **ft_split(char *s, char c)
{
	char	**ss;
	int		len;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	ss = (char **) malloc (sizeof(char *) * sslen(s, c) + 1);
	while (s[j] != 0)
	{
		if(s[j] == c)
		{
			j++;
		}
		else
		{
			k = j;
			len = 0;
			while (s[j] != c)
			{
				len++;
				j++;
			}
			ss[i] = ft_substr(s, k, len);
			i++;
		}
	}
	ss[i] = 0;
	return (ss);
}

int main ()
{
	char s[300] = "    hamza nait   is here to stay ";
	char **ss;
	int i;

	i = 0;
	ss = ft_split(s, ' ');
	while (ss[i] != 0)
	{
		printf("%s|", ss[i]);
		i++;
	}
}
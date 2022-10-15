#include "libft.h"

int sslen(char *s, char c)
{
	int i;
	int	cpt;
	char *ss;

	i = 0;
	cpt = 1;
	while (s[i] != 0)
	{
		if ((s[i] == c))
			cpt++;
		i++;
	}
	return (cpt);
}

int	findNext(char *s, int i, char c)
{
	while (s[i] != c && s[i] != 0)
	{
		i++;
	}
	return (i);
}

char **ft_split(char const *s, char c)
{
	char	**splited;
	char 	*word;
	char	*string;
	int 	i;
	int		j;
	int		lastString;

	i = 0;
	j = 0;
	lastString = 0;
	string = ft_strtrim((char *) s, (const char *) c);
	splited = (char **) malloc (sizeof(char *) * sslen(string , c));
	if(!splited)
		return (0);
	while (string[i] != 0)
	{
		if (string[i] = c || i == 0)
		{
			splited[j] = ft_substr(string, i, findNext(string, i, c));
			printf(splited[j]);
			j++;
		}
		i++;
	}
	return (splited);
}

int main ()
{
	char s[300] = "lkjlk ljsdf  fk sjq  dhfih ezlfjlk jhsodijf   ";
}
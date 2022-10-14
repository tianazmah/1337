#include "libft.h"

int sslen(char *s, char c)
{
	int i;

	i = 0;
	while (*(s++) != 0)
	{
		if (*s == c)
			i++;
	}
	
	return (i);
}

// char **ft_split(char const *s, char c)
// {
// 	char	**ss;
// 	int 	i;

// 	i = 0;
	
// 	while (s[i] != 0)
// 	{
		
// 	}
// }

int main ()
{
	char s[300] = "lkjlk ljsdf fksjqdhfih ezlfjlk jhsodijf";
	printf ("%d", sslen(s, ' '));
}
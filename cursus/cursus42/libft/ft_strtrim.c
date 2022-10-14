#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ss;
	int		i;
	int		j;

	i = 0;
	while (ft_strchr(set, s1[i]))
	{
		i++;
		
	}
	j = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[j]))
	{
		j--;
	}
	ss = (char *) malloc (j - i + 1);
	ft_strlcpy(ss, &s1[i], j - i + 1);
	return (ss);
}

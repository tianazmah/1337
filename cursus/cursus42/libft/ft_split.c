/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:33:36 by hnait             #+#    #+#             */
/*   Updated: 2022/10/17 21:38:00 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sslen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*s)
	{
		if (*s == c)
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

char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	ss = (char **) malloc (sizeof(char *) * sslen(s, c) + 1);
	while (s[j] != 0)
	{
		if (s[j] == c)
			j++;
		else
		{
			k = j;
			while (s[j] != c)
			{
				j++;
			}
			ss[i++] = ft_substr(s, k, j - k);
		}
	}
	ss[i] = 0;
	return (ss);
}

// int main ()
// {
// 	char s[100] = "  hamza   is here to stay ";
// 	char **ss;

// 	ss = ft_split(s, ' ');
// 	while (*ss)
// 	{
// 		printf("|%s|\n", *ss);
// 		ss++;
// 	}
// }
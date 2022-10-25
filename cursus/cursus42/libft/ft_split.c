/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:33:36 by hnait             #+#    #+#             */
/*   Updated: 2022/10/25 13:53:03 by hnait            ###   ########.fr       */
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

int	not_in_s(const char *s, int j, char c)
{
	while (s[j] != c && s[j])
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	ss = (char **) malloc (sizeof(char *) * sslen(s, c) + 1);
	if (!ss)
		return (0);
	while (s[j] != 0)
	{
		if (s[j] == c)
			j++;
		else
		{
			k = j;
			j = not_in_s(s, j, c);
			ss[i++] = ft_substr(s, k, j - k);
		}
	}
	ss[i] = 0;
	return (ss);
}

int main ()
{
	char s[100] = "                  olol lkjsdf lskdfjlakdjf skadjfl sfj ak";

	ft_split(s, ' ');
}
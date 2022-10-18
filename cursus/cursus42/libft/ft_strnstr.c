/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:35:14 by hnait             #+#    #+#             */
/*   Updated: 2022/10/18 23:48:19 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*hs;
	char	*nd;

	hs = strdup(haystack);
	nd = strdup(needle);
	i = 0;
	if (ft_strlen(nd) == 0)
		return (hs);
	while (i < len)
	{
		if (ft_strncmp(&hs[i], nd, ft_strlen(nd)) == 0)
		{
			return (&hs[i]);
		}
		i++;
	}
	return (0);
}

int main ()
{
	char *s1 = "FF";
	char *s2 = "see F your F return F now F";
	size_t max = ft_strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf ("| %s |\n", i1);
	printf ("| %s |\n", i2);
}
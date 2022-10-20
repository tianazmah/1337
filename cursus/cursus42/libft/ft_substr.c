/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:13:05 by marvin            #+#    #+#             */
/*   Updated: 2022/10/20 22:45:47 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	if (!s)
	{
		return (0);
	}
	i = 0;
	ss = (char *) malloc (sizeof (char) * len + 1);
	if (!ss)
	{
		return (0);
	}
	if (start <= ft_strlen(ss))
	{
		while (i < len)
		{
			ss[i] = s[start];
			i++;
			start++;
		}
	}
	ss[i] = '\0';
	return (ss);
}

// int main ()
// {
// 	char *str = "i just want this part #############";
// 	size_t size = 20;
// 	char *ret = ft_substr(str, 5, size);
// 	printf("%s\n", ret);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:13:05 by marvin            #+#    #+#             */
/*   Updated: 2022/10/12 22:21:36 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	i = 0;
	ss = (char *) malloc (sizeof (char) * len);
	while (i < len)
	{
		ss[i] = s[start];
		i++;
		start++;
	}
	return (ss);
}

int main ()
{
	char s[10] = "hamza nai";

	printf ("%s\n", ft_substr(s, 3, 3));
}
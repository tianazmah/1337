/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:35:14 by hnait             #+#    #+#             */
/*   Updated: 2022/10/11 03:13:26 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (*haystack)
	{
		while (i < len)
		{
			if (haystack[i] != needle[i])
				break ;
			i++;
		}
		if (i == len)
		{
			return ((char *) haystack);
		}
		haystack++;
	}
	return (0);
}

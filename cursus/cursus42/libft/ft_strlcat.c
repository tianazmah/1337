/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:48:15 by hnait             #+#    #+#             */
/*   Updated: 2022/10/20 17:00:28 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[j] != 0)
	{
		j++;
	}
	while (src[i] != 0 && i < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (j);
}

int main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	
	printf ("return %lu, dest = | %s |\n", ft_strlcat(buff1, str, max), buff1);
	printf ("return %lu, dest = | %s |\n",strlcat(buff2, str, max), buff2);
}
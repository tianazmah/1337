/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:48:15 by hnait             #+#    #+#             */
/*   Updated: 2022/10/20 18:41:37 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	if (!dst && !dstsize)
		return (0);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (src[i] != 0 && i < dstsize - 1 - dstlen)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int main()
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	
// 	printf ("return %lu, dest = | %s |\n", ft_strlcat(buff1, str, max), buff1);
// 	printf ("return %lu, dest = | %s |\n", strlcat(buff2, str, max), buff2);
// }
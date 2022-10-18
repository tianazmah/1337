/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:48:15 by hnait             #+#    #+#             */
/*   Updated: 2022/10/18 10:31:33 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src,size_t dstsize)
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
	return (i);
}

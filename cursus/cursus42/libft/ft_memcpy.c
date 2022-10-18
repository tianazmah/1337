/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:15:16 by hnait             #+#    #+#             */
/*   Updated: 2022/10/18 10:42:53 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*s;
	char	*t;

	i = 0;
	t = (char *) src;
	s = (char *) dst;
	if (!t && !s)
		return (0);
	while (i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (dst);
}

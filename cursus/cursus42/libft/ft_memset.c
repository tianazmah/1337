/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 04:50:03 by hnait             #+#    #+#             */
/*   Updated: 2022/10/14 12:41:20 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;
	int				test;

	test = (int) len;
	if (test < 0)
		return (b);
	s = (unsigned char *)b;
	i = 0;
	printf("i ==> %zu, len ==> %zu", i, len);
	while (i > len)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

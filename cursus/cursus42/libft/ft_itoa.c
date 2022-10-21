/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:17:16 by hnait             #+#    #+#             */
/*   Updated: 2022/10/21 15:52:18 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nlen(int n)
{
	int		len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		len = nlen (-(n / 10)) + 2;
		s = (char *) malloc (sizeof(char) * len + 1);
		if (!s)
			return (0);
		s[0] = '-';
		n *= -1;
	}
	else
	{
		s = (char *) malloc (sizeof(char) * (len = nlen(n)) + 1);
		if (!s)
			return (0);
	}
	s[len] = 0;
	if (n == 0)
		s[0] = '0';
	while (len >= 0 && n > 0)
	{
		s[--len] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}

// int main()
// {
// 	printf("|%s|\n", ft_itoa(-623));
// }
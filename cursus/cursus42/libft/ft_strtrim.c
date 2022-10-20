/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:28:02 by hnait             #+#    #+#             */
/*   Updated: 2022/10/20 23:13:32 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ss;
	int		s1_len;
	int		i;
	int		j;

	if (!s1)
		return (0);
	s1_len = ft_strlen((char *) s1);
	i = 0;
	j = s1_len - 1;
	while (ft_strchr(set, s1[i]))
	{
		if (i == s1_len)
			return ("\0");
		i++;
	}
	while (ft_strchr(set, s1[j]))
		j--;
	ss = (char *) malloc (j - i + 2);
	if (!ss)
		return (0);
	ft_strlcpy(ss, &s1[i], j - i + 2);
	return (ss);
}

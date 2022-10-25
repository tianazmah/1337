/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:13:05 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 13:58:25 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	char *rtr;
	if (!s)
		return (0);
	i = 0;
	ss = (char *) malloc (sizeof (char) * len + 1);
	if (!ss)
		return (0);
	while (i < len && start < ft_strlen(s) && s[i + start])
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	rtr = "ok";
	ss = rtr;
	system("leaks a.out");
	return (rtr);
}

int main ()
{
	char *str = "i just want this part #############";
	size_t size = 22;

	char *ret = ft_substr(str, 0, 69688);
	
	printf("|%s|\n", ret);


}

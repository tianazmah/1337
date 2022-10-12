/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:31:55 by marvin            #+#    #+#             */
/*   Updated: 2022/10/12 16:31:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char *strdup(const char *s)
{
	int	i;
	char *ss;

	i = 1;
	while (s[i] != 0)
	{
		i++;
	}
	ss = (char *) malloc (sizeof(char *) * i);
	if (!ss)
		return (0);
	i = 0;
	while(s[i] != 0)
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = 0;
	return (ss);
}

int main()
{
	char *s = "hamza\0";

	printf ("%s\n", strdup(s));
	return 0;
}
#include <stdio.h>

size_t strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return size;
}
#include <stdio.h>

unsigned int ft_strcat(char *dest, char *src, unsigned int size)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0' && j < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i);
}

int main()
{
    char dest[10] = "hamza ";
    char src[5] = "nait";
    int a;
    a = ft_strcat(dest, src, 3);

    printf("dest = %s\nsrc = %s, return == %d\n", dest, src, a);
    return (0);
}
#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] == '\0')
        {
            return (-(s2[i]));
        }
        if (s2[i] == '\0')
        {
            return (s1[i]);
        }
        if (s1[i] > s2[i])
        {
            return (s1[i] - s2[i]);
        }
        if (s1[i] < s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    printf("comp == %d", ft_strcmp("hamza", "hamza", 7));
    return (0);
}

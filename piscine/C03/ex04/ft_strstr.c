#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char *c;
    i = 0;
    while (str[i] != '\0' && str[i] != to_find[0])
    {
        printf("str 1 ==  %c\n", str[i]);
        i++;
        if (str[i] == '\0')
        {
            return (0);
        }
        c = &str[i];
        j = 0;
        while (str[i] == to_find[j])
        {
            printf("str 2 == %c, tofind == %c\n", str[i], to_find[j]);
            if (to_find[j + 1] == '\0')
            {
                return (c); 
            }
            i++;
            j++;
        }
    }
    return (0);
}

int main ()
{
    char *c;
    
    c = ft_strstr("hamza nait est la", "nait");
    printf("my name is ===> %s", c);
    return(0);
}
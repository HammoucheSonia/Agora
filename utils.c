#include "agora.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strcmp(char *str1, char *str2)
{
    int i;

    i = 0;
    if (ft_strlen(str1) != ft_strlen(str2))
        return (0);
    while (str1[i] && str2[i])
    {
        if (str1[i] != str2[i])
            return (0);
        i++;
    }
    return (1);
}
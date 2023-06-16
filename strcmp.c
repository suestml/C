#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            return (-1);
        }
        if (s1[i] > s2[i])
        {
            return (1);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}

int    main(void)
{
    char a[] = "maerhabamerhabamerhaba";
    char b[] = "mAerhabamerhabamerhaba";

    printf("%d", ft_strcmp(a, b));
}

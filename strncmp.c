#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
    return (0);
}

int    main()
{
    char a[] = "ahello";
    char b[] = "ahersi";
 
    printf ("%d", ft_strncmp(a, b, 3));
}

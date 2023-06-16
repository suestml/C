char    *ft_strncat(char *dest, char *src, unsigned    int n)
{
    unsigned int    i;
    unsigned int    x;

    i = 0;
    x = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[x] != '\0' && x < n)
    {
        dest[i + x] = src[x];
        x++;
    }
    dest[i + x] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "selam";
    char src[] = " merhaba";

    printf("%s", ft_strncat(dest, src, 15));
}

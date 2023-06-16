int    ft_atoi(char *str)
{
    int    np;
    int    i;
    int    num;

    np = 1;
    i = 0;
    num = 0;
    while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            np *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + str[i] - '0';
        i++;
    }
    return (num * np);
}


#include <stdio.h>
int main(void)
{
    char *s = " ---+--+1234ab567";
    printf("%d", ft_atoi(s));
}

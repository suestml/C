int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}





#another code of strlen function
int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>
int main()
{
    char a[] = "hello";
    printf("%d", ft_strlen(a));
}

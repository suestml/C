char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (str + i);
		i++;
        x = 0;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
    char str[] = "dmsfmdscmdsvnlnd  deneme ldsfjlksf";
    char find[] = "me";

    printf("%s", ft_strstr(str, find));
}

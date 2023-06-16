void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}





# another code of putstr function


#include <unistd.h>
void    ft_putstr(char    *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main()
{
    char a[] = "hello, world!";
  //char *b;
  //b = a;
  //ft_putstr(b);
    ft_putstr(a);
}

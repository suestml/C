int    ft_is_prime(int nb)
{
    int    i;

    i = 2;
    if (nb == 1 || nb <= 0)
        return (0);
    while (i <= (nb / 2))
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
#include <stdio.h> 
int	main()
{
	printf("%d", ft_is_prime(2));
}

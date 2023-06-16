int	ft_recursive_power(int nb, int power)
{
	int x;

	x = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (x);
}

#include <stdio.h>
int main (void)
{
	printf("%i", ft_recursive_power(3, 4));
}

int	ft_iterative_factorial(int nb)
{
	unsigned int	x;

	x = 1;
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (x);
}
#include <stdio.h>
int main ()
{
	printf("%i", ft_iterative_factorial(5));
}

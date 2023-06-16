int	ft_recursive_factorial(int nb)
{
	int x;

	x = 1;
	if (nb > 0)
	{
		x *= nb * ft_recursive_factorial(nb -1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (x);
}

#include <stdio.h>
int main(void)
{
	printf("%i", ft_recursive_factorial(3));
}

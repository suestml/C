int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	while   (power > 1)
	{
		x *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (x);
}
#include <stdio.h>
int main(void)
{
	printf("%i", ft_iterative_power(3, 4));
}

#include <unistd.h>

void	first(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			first(a / 10 + '0');
			first(a % 10 + '0');
			first(' ');
			first(b / 10 + '0');
			first(b % 10 + '0');
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	first(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

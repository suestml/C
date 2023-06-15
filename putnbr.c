#include <unistd.h>

void	first(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		first('8');
	}
	else if (nb < 0)
	{
		first('-');
		ft_putnbr(-nb);
	}
	else
	{	
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		first(nb % 10 + '0');
	}
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}

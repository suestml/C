#include <unistd.h>

void	ft_print_numbers(void)
{
	char	y;

	y = '0';
	while (y <= '9')
	{
		write(1, &y, 1);
		y++;
	}
}

int	main(void)
{
	ft_print_numbers();
}

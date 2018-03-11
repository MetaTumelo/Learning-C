#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int n)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar (nb + 48);
	return (nb);
}

int		main(int argc, char **argv)
{
	int		i;
	(void)argv;

	i = 1;
	while (i < argc)
		i++;
	i = i - 1;
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}

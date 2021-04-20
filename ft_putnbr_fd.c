#include "unistd.h"

void	petit_putnbr(int nb, int fd)
{
	char	c;

	if (nb < 0)
	{
		write(fd, "-", 1)
		nb = -nb;
	}
	c = nb + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb > -10 && nb < 10)
		petit_putnbr(nb, fd);
	else if (nb > 0)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		if (nb == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			write(fd, "-", 1);
			ft_putnbr_fd(-nb, fd);
		}
	}
}

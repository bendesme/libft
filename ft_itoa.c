#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	csize(long nb)
{
	int	size;

	size = 1;
	if (nb < 0)
		size++;
	while (nb / 10)
	{
		size++;
		nb /= 10;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	div;
	long	nb;

	nb = (long)n;
	str = (char *)malloc(csize(nb) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	if (nb < 0)
		str[i++] = '-';
	if (nb < 0)
		nb *= -1;
	div = 1;
	while (nb / div > 9)
		div *= 10;
	while (div)
	{
		str[i++] = nb / div + '0';
		nb = nb % div;
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}

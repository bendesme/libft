#include "libft.h"

int	ft_atoi(char *str)
{
	int				i;
	unsigned long	r;
	int				s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i]
		 == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s = s * -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = s * r * 10 + (str[i] - 48);
		i++;
		if (r * s < 0 && s == 1)
			return (-1);
		if (r * s < 0 && s != 1)
			return (0);
	}
	return ((int)r);
}

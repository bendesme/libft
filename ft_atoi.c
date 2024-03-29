#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s = s * -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0') * s;
		i++;
		if (r * s < 0 && s == 1)
			return (-1);
		if (r * s < 0 && s != 1)
			return (0);
	}
	return ((int)r);
}

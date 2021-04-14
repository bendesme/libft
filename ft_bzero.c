#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*i;
	size_t	a;

	a = 0;
	i = (char *)s;
	while (a < n)
	{
		i[a] = '\0';
		a++;
	}
}

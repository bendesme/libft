#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;
	size_t	a;

	a = 0;
	tmp = (char *)s;
	while (a < n)
	{
		tmp[a] = '\0';
		a++;
	}
}

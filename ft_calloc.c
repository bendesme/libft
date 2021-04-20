#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(nmemb * size);
	if (!a)
		return (0);
	i = 0;
	while (i < count * size)
	{
		a[i] = 0;
		i++;
	}
	return ((void *)a);
}

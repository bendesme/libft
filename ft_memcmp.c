#include "libft.h"

static int	c(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if ((!a && !b) || n <= 0)
		return (0);
	else if (!a)
		return (-b[0]);
	else if (!b)
		return (a[0]);
	i = 0;
	while (i < n - 1)
	{
		if (a[i] != b[i])
			return (c(a[i]) - c(b[i]));
		i++;
	}
	return (c(a[i]) - c(b[i]));
}

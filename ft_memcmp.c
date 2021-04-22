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
	if (s1 && s2 && n <= 0)
		return (0);
	else if (!a && s1 && s2)
		return (-b[0]);
	else if (!b && s1 && s2)
		return (a[0]);
	i = 0;
	while (i < n - 1)
	{
		if (a[i] != b[i])
			return (c(a[i]) - c(b[i]));
		i++;
	}
	if (s1 && s2)
		return (c(a[i]) - c(b[i]));
	return (0);
}

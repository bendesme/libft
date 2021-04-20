#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	if (!dst || !src)
		return (0);
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (i < n && (unsigned char)a[i] != (unsigned char)c)
	{
		b[i] = a[i];
		i++;
	}
	if (i == n)
		return (0);
	b[i] = a[i];
	return (&b[i + 1]);
}

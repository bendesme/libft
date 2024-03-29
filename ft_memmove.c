#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{	
	size_t			i;
	const char		*a;
	char			*b;

	a = (char *)src;
	b = (char *)dest;
	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (i > 0)
		{
			b[i - 1] = a[i - 1];
			i--;
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}

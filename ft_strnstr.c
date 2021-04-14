#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	a;
	size_t	b;

	if (!ft_strlen(substr))
		return ((char *)str);
	a = 0;
	while (str[a] && a < len)
	{
		b = 0;
		while (substr[b] && str[a + b] && substr[b] == str[a + b]
			&& (a + b) < len)
			b++;
		if (!substr[b])
			return ((char *)&str[a]);
		a++;
	}
	return (0);
}

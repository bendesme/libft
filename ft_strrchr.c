#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = 0;
	while (s[l])
		l++;

	if (!c)
		return ((char *)&s[l]);
	while (l >= 0)
	{
		if (s[l] == c)
			return ((char *)&s[l]);
		l--;
	}
	return (0);
}

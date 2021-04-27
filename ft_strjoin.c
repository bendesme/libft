#include "libft.h"

int	j_len(char const *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_nouvellenorme(int i, char *res, char const *s1)
{
	res[i] = s1[i];
	i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = (char *)malloc((j_len(s1) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i])
			i = ft_nouvellenorme(i, res, s1);
	}
	j = 0;
	if (s2)
	{
		while (s2[j])
		{
			res[i + j] = s2[j];
			j++;
		}
	}
	res[i + j] = '\0';
	return (res);
}

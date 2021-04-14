char	*ft_strrchr(const chqr *s, int c)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	while (l >= 0)
	{
		if (s[l] == c)
			return (s[l]);
		l++;
	}
	if (!c)
		return (s[l]);
	return (0);
}

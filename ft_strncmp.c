/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:57:25 by bdesmet           #+#    #+#             */
/*   Updated: 2021/04/15 18:49:05 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l;
	int		a;
	int		b;

	if (n <= 0)
		return (0);
	l = 0;
	while (l < n - 1 && s1[l] && s2[l])
	{
		if (s1[l] != s2[l])
			return ((unsigned char)(s1[l]) - (unsigned char)(s2[l]));
		l++;
	}
	a = s1[l];
	b = s2[l];
	if (a < 0)
		a = a * -1;
	if (b < 0)
		b = b * -1;
	return (a - b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:12:56 by bdesmet           #+#    #+#             */
/*   Updated: 2021/04/15 18:48:15 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!src || !dst)
		return (0);
	while (src[b])
		b++;
	if (size == 0)
		return (b);
	while (a + 1 < size && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:12:56 by bdesmet           #+#    #+#             */
/*   Updated: 2020/01/23 17:33:40 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	while (b != '\0')
		b++;
	if (size == 0)
		return (b);
	while (a + 1 < size && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (a);
}

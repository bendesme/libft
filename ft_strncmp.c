/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:57:25 by bdesmet           #+#    #+#             */
/*   Updated: 2020/01/23 17:32:25 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a] && a < n)
			return (s1[a]-s2[a]);
		a++;
	}
	return (0);
}
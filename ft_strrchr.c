/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:39:54 by bdesmet           #+#    #+#             */
/*   Updated: 2020/01/23 17:54:19 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return (s[a]);
		a++;
	}
	return ('0');
}

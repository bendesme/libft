/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:56:25 by bdesmet           #+#    #+#             */
/*   Updated: 2020/01/23 14:50:54 by bdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

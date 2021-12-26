/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:18:17 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/28 12:18:21 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_hexa_min(unsigned int nb, int *j)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &base[nb], 1);
		*j += 1;
	}
	else
	{
		ft_hexa_min((nb / 16), j);
		ft_hexa_min((nb % 16), j);
	}
}

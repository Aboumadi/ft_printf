/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:17:53 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/28 12:17:57 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_hexa_max(unsigned int nb, int *j)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb < 16)
	{
		write(1, &base[nb], 1);
		*j += 1;
	}
	else
	{
		ft_hexa_max((nb / 16), j);
		ft_hexa_max((nb % 16), j);
	}
}

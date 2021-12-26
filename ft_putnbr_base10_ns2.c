/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base10_ns2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:18:54 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/28 12:19:04 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_base10_ns2(unsigned int n, int *j)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		*j += 1;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(48 + nb);
		*j += 1;
	}
	else if (nb > 9)
	{
		ft_putnbr_base10_ns2((nb / 10), j);
		ft_putnbr_base10_ns2((nb % 10), j);
	}
}

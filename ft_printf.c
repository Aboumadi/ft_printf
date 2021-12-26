/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:26:21 by aboumadi          #+#    #+#             */
/*   Updated: 2021/12/11 13:53:19 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	check(char c, va_list argp, int *count)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(argp, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr_base10(va_arg(argp, int), count);
	else if (c == 's')
		*count += ft_putstr(va_arg(argp, char *));
	else if (c == 'u')
		ft_putnbr_base10_ns2(va_arg(argp, int), count);
	else if (c == 'x')
		ft_hexa_min(va_arg(argp, unsigned int), count);
	else if (c == 'X')
		ft_hexa_max(va_arg(argp, unsigned int), count);
	else if (c == 'p')
	{
		write (1, "0x", 2);
		*count += 2;
		ft_px(va_arg(argp, unsigned long int), count);
	}
	if (c == '%')
		*count += ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	argp;

	count = 0;
	i = 0;
	va_start(argp, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			check(format[++i], argp, &count);
			i++;
		}
		else
		{
			write (1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(argp);
	return (count);
}

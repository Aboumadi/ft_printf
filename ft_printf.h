/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:27:38 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/28 12:26:55 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
void	ft_putnbr_base10(int nb, int *j);
void	ft_putnbr_base10_ns2(unsigned int nb, int *j);
void	ft_hexa_min(unsigned int nb, int *j);
void	ft_hexa_max(unsigned int nb, int *j);
void	ft_px(unsigned long int nb, int *j);
int		ft_putstr(char *str);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 03:22:02 by acarle-m          #+#    #+#             */
/*   Updated: 2022/01/05 16:42:11 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
		i += ft_putchar(s[i]);
	return (i);
}

int	ft_putmod(void)
{
	ft_putchar('%');
	return (1);
}

int	ft_putunsigned(unsigned int ui)
{
	const char		*base;
	int				k;

	k = 0;
	base = "0123456789";
	if (ui >= 10)
	{
		k += ft_putunsigned((ui / 10));
		ui = ui % 10;
	}
	k += ft_putchar(base[ui]);
	return (k);
}

int	ft_putint(int i)
{
	int				k;

	k = 0;
	if (i < 0)
	{
		k += ft_putchar ('-');
		i *= -1;
	}
	k += ft_putunsigned(i);
	return (k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 03:21:54 by acarle-m          #+#    #+#             */
/*   Updated: 2022/01/05 16:31:45 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putpointer(unsigned long p)
{
	const char		*base;
	unsigned long	n;
	int				k;

	k = 0;
	base = "0123456789abcdef";
	n = (unsigned long)p;
	if (n >= 16)
	{
		k += putpointer((n / 16));
		n = n % 16;
	}
	k += ft_putchar(base[n]);
	return (k);
}

int	ft_putp(unsigned long p)
{
	int	k;

	k = 0;
	k += ft_putchar('0');
	k += ft_putchar('x');
	k += putpointer(p);
	return (k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 03:21:59 by acarle-m          #+#    #+#             */
/*   Updated: 2022/01/05 16:44:28 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlhex(unsigned int p)
{
	const char		*base;
	int				k;

	k = 0;
	base = "0123456789abcdef";
	if (p >= 16)
	{
		k += ft_putlhex((p / 16));
		p = p % 16;
	}
	k += ft_putchar(base[p]);
	return (k);
}

int	ft_putuhex(unsigned int p)
{
	const char		*base;
	int				k;

	k = 0;
	base = "0123456789ABCDEF";
	if (p >= 16)
	{
		k += ft_putuhex((p / 16));
		p = p % 16;
	}
	k += ft_putchar(base[p]);
	return (k);
}

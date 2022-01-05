/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:15:21 by acarle-m          #+#    #+#             */
/*   Updated: 2022/01/05 22:25:02 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_index(char type)
{
	const char	*base;
	int			j;

	j = 0;
	base = "cspdiuxX%";
	while (base[j])
	{
		if (type == base [j])
			return (j);
		j++;
	}
	return (-1);
}

int	printage(int i, va_list ap)
{
	int		count;
	void	*pap;

	count = -1;
	if (i < 8)
		pap = va_arg(ap, void *);
	if (i == 0)
		count = ft_putchar((char)pap);
	else if (i == 1)
		count = ft_putstr((char *)pap);
	else if (i == 2)
		count = ft_putp((unsigned long)pap);
	else if (i == 3 || i == 4)
		count = ft_putint((int)pap);
	else if (i == 5)
		count = ft_putunsigned((unsigned int)pap);
	else if (i == 6)
		count = ft_putlhex((unsigned int)pap);
	else if (i == 7)
		count = ft_putuhex((unsigned int)pap);
	else if (i == 8)
		count = ft_putmod();
	return (count);
}

int	ft_writeft(const char *s, va_list ap)
{
	int		count;
	int		i;
	int		index;

	i = -1;
	count = 0;
	while (s[++i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			index = get_index(s[i + 1]);
			if (index == -1)
				count += ft_putchar(s[i++ + 1]);
			else
			{
				count += printage(index, ap);
				i++;
			}	
		}
		else
			count += ft_putchar(s[i]);
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, s);
	count = ft_writeft(s, ap);
	if (count == -1)
	{
		write(2, "(null)", 6);
		return (6);
	}
	va_end(ap);
	return (count);
}

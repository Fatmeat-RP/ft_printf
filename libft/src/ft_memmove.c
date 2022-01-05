/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:00:23 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/11 21:53:35 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char		*sd;
	const unsigned char	*sc;
	size_t				i;

	i = 0;
	sd = (unsigned char *)d;
	sc = (const unsigned char *)s;
	if (d == 0 && s == 0)
		return (d);
	if (sc < sd)
	{
		while (n--)
			sd[n] = sc[n];
	}
	else
	{
		while (i < n)
		{
			sd[i] = sc[i];
			i++;
		}
	}
	return (d);
}

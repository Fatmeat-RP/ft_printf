/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:45:33 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/11 19:05:25 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char		*sd;
	const unsigned char	*sc;

	sd = (unsigned char *)d;
	sc = (unsigned char *)s;
	if (d == 0 && s == 0)
		return (d);
	while (n--)
		sd[n] = sc[n];
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:02:05 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/11 22:15:42 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*p;

	p = s1;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (*p && n)
	{	
		if (ft_memcmp(p, s2, ft_strlen(s2)) == 0 && ft_strlen(s2) <= n)
			return ((char *)p);
		p++;
		n--;
	}
	return (NULL);
}

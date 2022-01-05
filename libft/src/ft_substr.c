/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:24:31 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/22 21:54:46 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*sdup(char const *s, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len && s[i])
	{
		p[i] = (char) s[i];
		i++;
	}
	p[i] = 0;
	return (p);
}

char	*ft_substr(char const *s, unsigned int ps, size_t n)
{
	char	*p;

	if (ps > ft_strlen (s))
		ps = ft_strlen (s);
	if (ps + n > ft_strlen (s))
		n = ft_strlen (s) - ps;
	p = sdup(s + ps, n);
	return (p);
}

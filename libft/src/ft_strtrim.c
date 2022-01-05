/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:40:18 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/16 01:40:42 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char *sep, int c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(sep))
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	long	i;
	char	*p;

	while (is_sep((char *)set, *s))
		s++;
	i = ft_strlen(s);
	while (i > 0 && is_sep((char *)set, s[i - 1]))
		i--;
	p = ft_substr(s, 0, i);
	return (p);
}

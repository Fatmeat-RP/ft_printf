/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:34:04 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/14 18:35:59 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	s = malloc(j + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	while (i < j)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < (j + ft_strlen(s2)))
	{
		s[i] = s2[i - j];
		i++;
	}
	s[i] = 0;
	return (s);
}

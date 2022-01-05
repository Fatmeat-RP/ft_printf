/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:35:20 by acarle-m          #+#    #+#             */
/*   Updated: 2021/11/14 18:12:15 by acarle-m         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	i;

	i = 0;
	s = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (! s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s[i] = (char)s1[i];
		i++;
	}
	s[i] = 0;
	return (s);
}

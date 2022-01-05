/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:15:23 by acarle-m          #+#    #+#             */
/*   Updated: 2022/01/05 16:23:32 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putp(unsigned long p);
int	ft_putlhex(unsigned int p);
int	ft_putuhex(unsigned int p);
int	ft_putmod(void);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putunsigned(unsigned int ui);
int	ft_putint(int i);

#endif
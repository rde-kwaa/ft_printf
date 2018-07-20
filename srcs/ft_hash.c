/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:20:58 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/20 13:25:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
int		ft_hash(va_list arg, char c)
{
	int	len;
	long int n;
//	static long int	i;

	len = 0;
	if ((c == 'o' || c == 'O'))
	{
		n = *((int*)&arg);
		if (n)
		{
			ft_putchar('0');
			return (1);
		}
	}
	else if (c == 'x')
	{
		ft_putstr("0x");
		len = 2;
	}
	else if (c == 'X')
	{
		ft_putstr("0X");
		len = 2;
	}
	return (len);
}

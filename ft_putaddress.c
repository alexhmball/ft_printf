/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:41:18 by aball             #+#    #+#             */
/*   Updated: 2021/11/01 03:41:23 by aball            ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_write(unsigned long long n)
{
	if (n == 10)
		write(1, "a", 1);
	else if (n == 11)
		write(1, "b", 1);
	else if (n == 12)
		write(1, "c", 1);
	else if (n == 13)
		write(1, "d", 1);
	else if (n == 14)
		write(1, "e", 1);
	else if (n == 15)
		write(1, "f", 1);
	else if (n >= 0 && n <= 9)
		ft_putnbr(n);
	return (1);
}

static int	hexer(unsigned long long n)
{
	static int	i;

	i = 0;
	if (n > 15)
		hexer(n / 16);
	i += hex_write(n % 16);
	return (i);
}

int	ft_putaddress(unsigned long long ptr)
{
	int	c;

	c = ft_putstr("0x");
	c += hexer((unsigned long long)ptr);
	return (c);
}

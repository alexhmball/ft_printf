/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:36:56 by aball             #+#    #+#             */
/*   Updated: 2021/11/01 03:37:01 by aball            ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_n(unsigned int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

int	ft_putnbr_uns(unsigned int n)
{
	int	c;

	c = count_n(n);
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(48 + n % 10);
	return (c);
}

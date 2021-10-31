/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:32:06 by aball             #+#    #+#             */
/*   Updated: 2021/11/01 03:32:08 by aball            ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_hex(unsigned int n)
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

int	put_hex(unsigned int n)
{
	static int	i;

	i = 0;
	if (n > 15)
		put_hex(n / 16);
	i += convert_hex(n % 16);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:42:37 by aball             #+#    #+#             */
/*   Updated: 2021/11/01 03:42:40 by aball            ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_hex_up(unsigned int n)
{
	if (n == 10)
		write(1, "A", 1);
	else if (n == 11)
		write(1, "B", 1);
	else if (n == 12)
		write(1, "C", 1);
	else if (n == 13)
		write(1, "D", 1);
	else if (n == 14)
		write(1, "E", 1);
	else if (n == 15)
		write(1, "F", 1);
	else if (n >= 0 && n <= 9)
		ft_putnbr(n);
	return (1);
}

int	put_hex_up(unsigned int n)
{
	static int	i;

	i = 0;
	if (n > 15)
		put_hex_up(n / 16);
	i += convert_hex_up(n % 16);
	return (i);
}

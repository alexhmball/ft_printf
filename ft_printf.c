/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:57:18 by aball             #+#    #+#             */
/*   Updated: 2021/10/28 20:57:22 by aball            ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_else_if(const char *f, va_list ap, int i, int count)
{
	if (f[i + 1] == '%')
		count += ft_putchar('%');
	else if (f[i + 1] == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (f[i + 1] == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (f[i + 1] == 'i' || f[i + 1] == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (f[i + 1] == 'u')
		count += ft_putnbr_uns(va_arg(ap, unsigned int));
	else if (f[i + 1] == 'x')
		count += put_hex(va_arg(ap, unsigned int));
	else if (f[i + 1] == 'X')
		count += put_hex_up(va_arg(ap, unsigned int));
	else if (f[i + 1] == 'p')
		count += ft_putaddress(va_arg(ap, unsigned long long));
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, f);
	while (f[i])
	{
		if (f[i] != '%')
			count += ft_putchar(f[i--]);
		else
			count = ft_else_if(f, ap, i, count);
		i += 2;
	}
	va_end(ap);
	return (count);
}

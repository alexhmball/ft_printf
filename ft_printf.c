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

int		ft_printf(const char *f, ...)
{
	va_list	ap;
	int i;

	va_start(ap, f);
	i = 0;
	while (f[i])
	{
		if (f[i] != '%')
			ft_putchar(f[i]);
		else if (f[i + 1] == '%')
		{
			ft_putchar('%');
			i++;
		}
		else if (f[i + 1] == 'c')
		{
			ft_putchar(va_arg(ap, int));
			i++;
		}
		else if (f[i + 1] == 's')
		{
			ft_putstr(va_arg(ap, char *));
			i++;
		}
		else if (f[i + 1] == 'i')
		{
			ft_putnbr(va_arg(ap, int));
			i++;
		}
		else if (f[i + 1] == 'd')
		{
			ft_putstr(ft_itoa(va_arg(ap, double)));
			i++;
		}
		i++;
	}
	va_end(ap);
	return (i);
}

int		main(void)
{
	ft_printf("fuck i%c up%c  %i %s %% %d\n", 't', '!', -7, "HELLO", 3.14);
}

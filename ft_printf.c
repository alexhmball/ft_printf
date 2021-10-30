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
	int     i;
    int     count;

	va_start(ap, f);
	i = 0;
    count = 0;
	while (f[i])
	{
		if (f[i] != '%')
        {
			ft_putchar(f[i]);
            count++;
        }
		else if (f[i + 1] == '%')
		{
			ft_putchar('%');
			i++;
            count++;
		}
		else if (f[i + 1] == 'c')
		{
			ft_putchar(va_arg(ap, int));
			i++;
            count++;
		}
		else if (f[i + 1] == 's')
		{
			count += ft_putstr(va_arg(ap, char *));
			i++;
		}
		else if (f[i + 1] == 'i' || f[i + 1] == 'd')
		{
			ft_putnbr(va_arg(ap, int));
			i++;
		}
        else if (f[i + 1] == 'u')
        {
            ft_putnbr_uns(va_arg(ap, size_t));
            i++;
        }
		i++;
	}
	va_end(ap);
	return (count);
}

// int		main(void)
// {
    
// 	ft_printf("| %c|\n", '0' - 256);
//     printf("| %c|\n", '0' - 256);
    
// }

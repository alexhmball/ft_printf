
#include "ft_printf.h"

static size_t count_n(size_t n)
{
    size_t c;

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

size_t	ft_putnbr_uns(size_t n)
{
    size_t c;

    c = count_n(n);
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar(48 + n % 10);
    return (c);
}
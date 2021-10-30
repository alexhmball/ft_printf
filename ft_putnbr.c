
#include "ft_printf.h"

static size_t count_n(int n)
{
    size_t c;

    c = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        c++;
        n *= -1;
    }
    while (n)
    {
        n /= 10;
        c++;
    }
    return (c);
}

size_t	ft_putnbr(int n)
{
    size_t c;

    c = count_n(n);
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putchar('8');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar(48 + n % 10);
	}
    return (c);
}

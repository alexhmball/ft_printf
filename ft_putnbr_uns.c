
#include "ft_printf.h"

void	ft_putnbr_uns(size_t n)
{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar(48 + n % 10);
}
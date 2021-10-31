
#include "ft_printf.h"

int	ft_putaddress(void *ptr)
{
		write(1, ft_itoa((int)ptr), 10);
	return (0);
}

int	main(void)
{
	char *ptr;

	ptr = "yo";
	ft_putaddress(&ptr);
}

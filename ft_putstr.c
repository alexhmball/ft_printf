#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
    size_t i;

    i = 0;
	while (str[i])
		write(1, &str[i++], 1);
    return (i);
}

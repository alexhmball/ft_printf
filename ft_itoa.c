
#include "ft_printf.h"

static int	num_size(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	while (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*strmake(int n)
{
	int		i;
	char	*dest;

	i = num_size(n);
	dest = (char *)malloc(i + 1);
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int nbr)
{
	int		i;
	char	*dest;

	dest = strmake(nbr);
	i = num_size(nbr) - 1;
	if (nbr == -2147483648)
	{
		dest[i--] = '8';
		nbr = -214748364;
	}
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr *= -1;
	}
	while (nbr > 9)
	{
		dest[i--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	if (nbr <= 9)
		dest[i--] = nbr + 48;
	return (dest);
}

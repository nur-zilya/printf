#include "libftprintf.h"

int ft_putnbr(int n)
{
    if (n == -2147483648)
        ft_putstr("-214783648");
    else if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr(n);
    }
    else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
    return (1);
}
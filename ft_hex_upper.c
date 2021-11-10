#include "ft_printf.h"

int ft_hex_upper(int x)
{
	char *str;

	str = "0123456789ABCDEF";
	if (x < 16)
		ft_putchar(str[x]);
	else
	{
		ft_hex(x / 16);
		ft_hex(x % 16);
	}
	return (1);
}

int main ()
{
	int i = 125;

	ft_printf("%x\n", i);
	printf("%x\n", i);
}
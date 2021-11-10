#include "ft_printf.h"

int ft_hex(int x)
{
	char *str;

	str = "0123456789abcdef";
	if (x < 16)
		ft_putchar(str[x]);
	else
	{
		ft_hex(x / 16);
		ft_hex(x % 16);
	}
	return (1);
}

// int main ()
// {
// 	int i = -125a;

// 	ft_printf("%x\n", i);
// 	printf("%x\n", i);
// }
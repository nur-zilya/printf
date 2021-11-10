#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);  
int ft_hex(int x);
int ft_hex_upper(int x);

#endif
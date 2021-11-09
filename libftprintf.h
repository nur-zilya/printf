#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);  
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
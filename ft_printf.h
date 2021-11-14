#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_hex(int x);
int		ft_convers(unsigned int c, char *str);
size_t	ft_strlen(const char *str);
int		ft_convers_u(unsigned long int c, char *str);
int		ft_pointer(void *p);
int		ft_selection(va_list ap, char c);
#endif
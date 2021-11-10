/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfast <hfast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:43:04 by hfast             #+#    #+#             */
/*   Updated: 2021/11/10 16:47:20 by hfast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list ap;

	int		i;
	int		j;
	
	i = 0;
	j = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
				j = j + ft_putchar(str[i]);
		else
		{
			i++;
			if (str[i] == 'c')
					j = j + ft_putchar(va_arg(ap, int));
			if (str[i] == 's')
					j = j + ft_putstr(va_arg(ap, char *));
			if (str[i] == 'd' || str[i] == 'i')
					j = j + ft_putnbr(va_arg(ap, int));
			if (str[i] == 'x')
					j = j + ft_hex(va_arg(ap, int));
			if (str[i] == '%')
					j = j + write (1, "%", 1);
		}
		i++;
	}
	va_end(ap);
	return (j);
}


// int main()
// {
// 	ft_printf("   %c     %c    %s      %d  %%     ", 's', 'u', "str", 12);
// }
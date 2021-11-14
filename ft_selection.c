/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfast <hfast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:13:14 by hfast             #+#    #+#             */
/*   Updated: 2021/11/13 19:13:16 by hfast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selection(va_list ap, char c)
{
	int	j;

	if (c == 'c')
		j = ft_putchar(va_arg(ap, int));
	if (c == 's')
		j = ft_putstr(va_arg(ap, char *));
	if (c == 'd')
		j = ft_putnbr(va_arg(ap, int));
	if (c == '%')
		j = ft_putchar('%');
	if (c == 'u')
		j = ft_convers_u(va_arg(ap, unsigned int), "0123456789");
	if (c == 'i')
		j = ft_putnbr(va_arg(ap, int));
	if (c == 'x')
		j = ft_convers(va_arg(ap, int), "0123456789abcdef");
	if (c == 'X')
		j = ft_convers(va_arg(ap, int), "0123456789ABCDEF");
	if (c == 'p')
		 j = ft_pointer(va_arg(ap, void *));
	return (j);
}

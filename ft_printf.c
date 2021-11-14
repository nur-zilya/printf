/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfast <hfast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:43:04 by hfast             #+#    #+#             */
/*   Updated: 2021/11/13 19:14:43 by hfast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] != '%')
			j += ft_putchar(str[i]);
		else
		{
			i++;
			j += ft_selection(ap, str[i]);
		}
		i++;
	}
	va_end(ap);
	return (j);
}

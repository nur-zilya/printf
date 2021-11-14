/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfast <hfast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:12:36 by hfast             #+#    #+#             */
/*   Updated: 2021/11/13 19:12:40 by hfast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convers_u(unsigned long int c, char *str)
{
	int				i;
	unsigned int	len;

	len = ft_strlen(str);
	if (c < len)
		return (ft_putchar(str[c]));
	i = ft_convers_u(c / len, str);
	ft_convers(c % len, str);
	return (i + 1);
}

int	ft_pointer(void *p)
{
	write(1, "0x", 2);
	return (2 + ft_convers_u((unsigned long int)p, "0123456789abcdef"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfast <hfast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:12:20 by hfast             #+#    #+#             */
/*   Updated: 2021/11/13 19:12:32 by hfast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_convers(unsigned int c, char *str)
{
	int				i;
	unsigned int	len;

	len = ft_strlen(str);
	if (c < len)
		return (ft_putchar(str[c]));
	i = ft_convers(c / len, str);
	ft_convers(c % len, str);
	return (i + 1);
}

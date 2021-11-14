/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfast <hfast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:12:57 by hfast             #+#    #+#             */
/*   Updated: 2021/11/13 19:13:00 by hfast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int i)
{
	int	count;

	count = 0;
	if (i < 0)
		count++;
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
	return (ft_len(n));
}

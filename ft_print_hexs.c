/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 07:53:16 by Fran              #+#    #+#             */
/*   Updated: 2022/10/06 11:21:06 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_puthex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, format);
		ft_puthex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, format);
	return (ft_hex_len(num));
}

int	ft_puthex_upper(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 16)
	{
		ft_puthex_upper(n / 16);
		ft_puthex_upper(n % 16);
	}
	else
	{
		if (n >= 10)
			ft_putchar(n + 55);
		else
			ft_putchar(n + '0');
	}
	return (i);
}

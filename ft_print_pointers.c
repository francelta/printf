/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:36:53 by Fran              #+#    #+#             */
/*   Updated: 2022/10/06 12:31:29 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(uintptr_t num)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		ft_putpointer(num / 16);
		ft_putpointer(num % 16);
	}
	else if (num <= 9)
		ft_putchar(num + '0');
	else
		ft_putchar(num - 10 + 'a');
	return (i);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_putpointer(ptr);
		print_length += ft_ptr_len(ptr);
	}
	return (print_length);
}

int	ft_ptr_len(uintptr_t num)
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

static int	count_n(int n)
{
	int				i;
	unsigned int	number;

	i = 1;
	number = n;
	if (n < 0)
	{
		i = 2;
		number = -n;
	}
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	number;
	char			*a;

	a = (char *)malloc(count_n(n) + 1);
	if (a == NULL)
		return (0);
	i = count_n(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		a[0] = '-';
	}
	a[i] = 0;
	a[i - 1] = '0';
	while (number > 0)
	{
		i--;
		a[i] = number % 10 + 48;
		number /= 10;
	}
	return (a);
}

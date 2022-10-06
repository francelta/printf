/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:36:53 by Fran              #+#    #+#             */
/*   Updated: 2022/10/06 11:20:28 by frcarras         ###   ########.fr       */
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
		ft_putchar_fd((num + '0'), 1);
	else
		ft_putchar_fd((num - 10 + 'a'), 1);
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

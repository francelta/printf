/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:45:24 by Fran              #+#    #+#             */
/*   Updated: 2022/10/06 12:11:43 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_arg(const char *contenido, int i, va_list args)
{
	if (contenido[i + 1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (contenido[i + 1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (contenido[i + 1] == 'd' || contenido[i + 1] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (contenido[i + 1] == 'x' || contenido[i + 1] == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), contenido[i + 1]));
	if (contenido[i + 1] == 'u')
		return (ft_putunsign(va_arg(args, unsigned int)));
	if (contenido[i + 1] == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	if (contenido[i + 1] == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

//&& ft_strchr("cspdiuxX%", contenido[i + 1])

int	ft_printf(const char *contenido, ...)
{
	va_list	ap;
	int		i;
	int		toprint;

	i = 0;
	toprint = 0;
	va_start(ap, contenido);
	while (contenido[i])
	{
		if (contenido[i] == '%')
		{
			toprint += ft_printf_arg(contenido, i, ap);
			i++;
		}
		else
			toprint += ft_putchar(contenido[i]);
		i++;
	}
	va_end(ap);
	return (toprint);
}

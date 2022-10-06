/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:57:26 by frcarras          #+#    #+#             */
/*   Updated: 2022/04/28 17:57:36 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:07:44 by frcarras          #+#    #+#             */
/*   Updated: 2022/04/28 18:07:49 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*a;

	a = (char *)malloc(ft_strlen(s) + 1);
	if (a == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		a[i] = (*f)(i, s[i]);
		i++;
	}
	a[i] = 0;
	return (a);
}

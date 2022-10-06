/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:03:50 by frcarras          #+#    #+#             */
/*   Updated: 2022/04/28 18:04:00 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*a;

	i = 0;
	j = 0;
	a = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!a)
		return (NULL);
	while (s1[i])
	{
		a[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		a[j++] = s2[i];
		i++;
	}
	a[j] = 0;
	return (a);
}

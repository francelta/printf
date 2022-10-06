/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:09:05 by frcarras          #+#    #+#             */
/*   Updated: 2022/05/19 19:24:31 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	a = ft_substr(s1, 0, i + 1);
	return (a);
}

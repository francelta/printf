/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:06:02 by frcarras          #+#    #+#             */
/*   Updated: 2022/05/02 10:10:06 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*list;

	i = 0;
	if (lst == NULL)
		return (i);
	list = lst;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

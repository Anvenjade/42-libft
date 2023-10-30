/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:20:51 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 06:47:03 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lstptr;

	i = 0;
	if (lst)
	{
		i++;
		lstptr = lst->next;
		while (lstptr)
		{
			i++;
			lstptr = lstptr->next;
		}
	}
	return (i);
}

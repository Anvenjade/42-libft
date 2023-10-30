/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:25:20 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/29 00:46:07 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptrlst;
	t_list	*ptrlst2;

	ptrlst = *lst;
	while (ptrlst)
	{
		ptrlst2 = ptrlst->next;
		ft_lstdelone(ptrlst, del);
		ptrlst = ptrlst2;
	}
	*lst = NULL;
}

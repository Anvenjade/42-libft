/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:32:55 by jfaure            #+#    #+#             */
/*   Updated: 2023/11/15 05:18:02 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int chartofind)
{
	const char	*temp;

	temp = NULL;
	while (1)
	{
		if (*src == (char) chartofind)
		{
			temp = src;
		}
		if (!*src)
		{
			break ;
		}
		src++;
	}
	return ((char *) temp);
}

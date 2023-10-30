/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:04:40 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 01:00:46 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Searches for char (ascii) in src, returns a pointer at 1st position found

#include "libft.h"

char	*ft_strchr(const char *src, int chartofind)
{
	while (1)
	{
		if (*src == (char) chartofind)
		{
			return ((char *)src);
		}
		if (!*src)
		{
			return ((char *) NULL);
		}
		src++;
	}
	return ((char *) NULL);
}

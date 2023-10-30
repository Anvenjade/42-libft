/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:07:48 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:56:48 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies lenght number of entries inside src to dest, accounting for overlap

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char		*ptrdest;
	const char	*ptrsrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptrdest = dest;
	ptrsrc = src;
	if (ptrsrc > ptrdest)
	{
		while (length--)
			*ptrdest++ = *ptrsrc++;
	}
	else
	{
		ptrdest += length - 1;
		ptrsrc += length - 1;
		while (length--)
			*ptrdest-- = *ptrsrc--;
	}
	return (dest);
}

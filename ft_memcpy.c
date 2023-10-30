/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:38:44 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:57:38 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies n content of src to dest, uses pointers

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptrdest;
	const char	*ptrsrc;

	if (dest == NULL && src == NULL)
		return (0);
	ptrdest = dest;
	ptrsrc = src;
	while (n-- > 0)
	{
		*ptrdest = *ptrsrc;
		ptrdest++;
		ptrsrc++;
	}
	return (dest);
}

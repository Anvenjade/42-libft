/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:07:26 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 01:06:57 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies src into dest, up to src size or destsize, whichever is smaller
//Returns lenght of src whatever happens

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	offset;

	offset = 0;
	if (destsize > 0)
	{
		while (src[offset] != 0 && offset < (destsize -1))
		{
			dest[offset] = src[offset];
			offset++;
		}
		dest[offset] = 0;
	}
	return (ft_strlen(src));
}

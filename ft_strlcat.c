/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:24:54 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:52:07 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies buffsize characters from src to dest. Should be the max size of dest
// Some weird stuff with offsetting from the current content in dest

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t buffsize)
{
	size_t	destlen;
	size_t	i;

	destlen = ft_strlen(dest);
	i = 0;
	if (buffsize < destlen)
		return (ft_strlen(src) + buffsize);
	if (buffsize == 0)
		return (ft_strlen(src));
	if (buffsize > destlen)
	{
		while (src[i] && i < (buffsize - destlen - 1))
		{
			dest[destlen + i] = src[i];
			i++;
		}
	}
	if (buffsize > destlen)
		dest[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}

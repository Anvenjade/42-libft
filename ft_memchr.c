/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:19:02 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 01:04:43 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Searches through n contents of src for c, returns pointer at position

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*s;

	s = src;
	if (n != 0)
	{
		while (n-- != 0)
		{
			if (*s++ == (unsigned char) c)
				return ((void *)(s - 1));
		}
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:40:47 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:54:34 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sets n numbers of bytes inside poinnter s to value of c

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
	}
	return (s);
}

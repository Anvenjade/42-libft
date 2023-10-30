/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 02:18:02 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:59:43 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares n chars in s1 to s2, returning -1 if s1 is smaller than s2 in ascii
// or returns 1 if s1 is bigger than s2 in ascii
//Returns 0 if no differences or nothing to compare, crashes if s1 and s2 = null

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n--)
	{
		if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		if ((unsigned char)*s1++ > (unsigned char)*s2++)
			return (1);
	}
	return (0);
}

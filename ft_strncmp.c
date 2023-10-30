/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:42:16 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/22 01:17:16 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (
		i < n
		&& (unsigned char)s1[i] == (unsigned char)s2[i]
		&& s1[i]
		&& s2[i])
	{
		i++;
	}
	if ((unsigned char)s1[i] < (unsigned char)s2[i] && i != n)
		return (-1);
	if ((unsigned char)s1[i] > (unsigned char)s2[i] && i != n)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 03:40:34 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:48:53 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Duplicates a string, returning an identical copy limited by \0

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup)
	{
		i = 0;
		while (s[i])
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = 0;
	}
	return (dup);
}

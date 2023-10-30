/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 04:16:40 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:49:24 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Creates a new string that is s1 and s2 joined together

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		i;
	int		j;

	joint = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (joint)
	{
		i = -1;
		while (s1[++i])
			joint[i] = s1[i];
		j = i;
		i = -1;
		while (s2[++i])
			joint[i + j] = s2[i];
		joint[i + j] = 0;
	}
	return (joint);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 04:04:31 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/27 00:26:08 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start <= ft_strlen(s))
	{
		while (s[start + i] && i < len)
		{
			i++;
		}
	}
	sub = malloc(sizeof(char) * (i + 1));
	if (sub && start <= ft_strlen(s))
	{
		i = 0;
		while (i < len && s[start + i])
		{
			sub[i] = s[start + i];
			i++;
		}
	}
	if (sub)
		sub[i] = 0;
	return (sub);
}
//  int main()
//  {
//  	char *sub = ft_substr("hola", 4294967295, 0);
//  	printf("Final %s\n",sub);
//  }
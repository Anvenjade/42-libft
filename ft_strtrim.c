/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:39:18 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/27 02:52:17 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimstart(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (1)
	{
		if (!set[j])
			break ;
		if (set[j] == s1[i])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static size_t	ft_trimend(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	endnum;

	endnum = ft_strlen(s1) -1;
	i = 0;
	j = 0;
	while (1)
	{
		if (!set[j])
			break ;
		if (set[j] == s1[endnum - i])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		k;
	char	*trimmed;
	int		debug;

	start = ft_trimstart(s1, set);
	end = ft_strlen(s1) - ft_trimend(s1, set);
	debug = end - start + 1;
	if (end > start)
		trimmed = malloc(sizeof(char) * (debug));
	else
		trimmed = malloc (1);
	if (trimmed)
	{
		k = 0;
		while (start + k < end)
		{
			trimmed[k] = s1[start + k];
			k++;
		}
		trimmed[k] = 0;
	}
	return (trimmed);
}
//  int main()
// {
// 	char *trimmed = ft_strtrim("\t   \n\n\t    Hello \t !\t\t  ", "S\n\t");
// printf("%s\n",trimmed);
//  }
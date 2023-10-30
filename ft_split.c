/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:03:42 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 00:53:04 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Splits a string into an array of strings, divived by a given character in c

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	int	count;
	int	isword;

	count = 0;
	isword = 0;
	while (*str)
	{
		if (*str != c && !isword)
		{
			isword++;
			count++;
			str++;
		}
		else if (*str == c)
		{
			isword = 0;
			str++;
			continue ;
		}
		while (*str && *str != c)
			str++;
	}
	if (ft_strlen(str) > 0 && count == 0)
		count++;
	return (count);
}

static char	*ft_copy_til_c(const char *s, char c, int *index)
{
	char	*word;
	int		i;

	i = 0;
	while (s[*index + i] == c)
		(*index)++;
	while (s[*index + i] && s[*index + i] != c)
		i++;
	word = malloc (sizeof(char) * (i + 1));
	if (word)
	{
		i = 0;
		while (s[*index + i] && s[*index + i] != c)
		{
			word[i] = s[*index + i];
			i++;
		}
		word[i] = 0;
	}
	while (s[*index + i] == c)
		i++;
	*index += i;
	return (word);
}

static void	ft_freethem(char **wordarr, int i)
{
	while (--i != -1)
	{
		free(wordarr[i]);
	}
}

char	**ft_split(char const *str, char c)
{
	char	**wordarr;
	int		wordcount;
	int		i;
	int		index;

	wordcount = ft_countwords(str, c);
	wordarr = malloc (sizeof(char *) * (wordcount + 1));
	if (wordarr)
	{
		i = 0;
		index = 0;
		while (i < wordcount)
		{
			wordarr[i] = ft_copy_til_c(str, c, &index);
			if (!wordarr[i])
			{
				ft_freethem(wordarr, i);
				return (NULL);
			}
			i++;
		}
		wordarr[wordcount] = 0;
	}
	return (wordarr);
}

// int main ()
// {
// 	int i = 0;
// 	char **arr = ft_split("   Please   split   this   at      spaces  ", ' ');
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
//		free(arr[i]);
// 		i++;
// 	}
//	free(arr); 
// }
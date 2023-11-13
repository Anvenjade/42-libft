/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 03:24:24 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 01:02:50 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//String to int base 10, dies if more than 1 + or - sign, skips whitespaces

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_isspace(char nptr)
{
	if ((nptr >= '\t' && nptr <= '\r') || nptr == ' ')
		return (1);
	return (0);
}

long	ft_atol(const char *nptr)
{
	long	convertednum;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	convertednum = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign = -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		convertednum *= 10;
		convertednum += (long)(nptr[i++] - '0');
	}
	return (sign * convertednum);
}
//  int main ()
//  {
//   	char *str = "       -567;57";
//   	printf("%d\n", atoi(str));
//   	printf("%d\n", ft_atoi(str));
//  }

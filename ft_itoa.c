/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:54:37 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/28 02:41:39 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts int into an equivalent string 

#include "libft.h"

static void	ft_itoa2_le_retour(int n, char *str, int length)
{
	long	copy;

	copy = n;
	if (copy < 0)
	{
		str[0] = '-';
		copy *= -1;
		str++;
		length--;
	}
	str[length] = 0;
	while (length--)
	{
		str[length] = (copy % 10) + '0';
		copy /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	copy;

	length = 1;
	copy = n;
	if (copy < 0)
	{
		copy *= -1;
		length++;
	}
	while (copy / 10 > 0)
	{
		length++;
		copy /= 10;
	}
	str = malloc(sizeof(char) * (length + 1));
	if (str)
		ft_itoa2_le_retour(n, str, length);
	return (str);
}
// int main()
// {
// 	int n = -904131503;
// 	printf("Original number :%d\nConverted string :%s",n,ft_itoa(n));
// }
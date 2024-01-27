/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bigx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:34:42 by jfaure            #+#    #+#             */
/*   Updated: 2024/01/27 11:31:10 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


static int	ft_hexarecursive(long l, char *hexatable)
{
	int	count;

	count = 0;
	if (l < 0)
	{
		l *= -1;
		ft_putchar_fd('-', 1);
		count++;
	}
	if (l > 15)
	{
		count += ft_hexarecursive(l / 16, hexatable);
	}
	ft_putchar_fd(hexatable[l % 16], 1);
	count++;
	return (count);
}

int	ft_printf_bigx(va_list arg)
{
	long	l;
	char	*hexatable;

	hexatable = "0123456789ABCDEF";
	l = va_arg(arg, long);
	return (ft_hexarecursive(l, hexatable));
}

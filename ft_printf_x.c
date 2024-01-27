/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:50 by jfaure            #+#    #+#             */
/*   Updated: 2023/11/18 04:56:42 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

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

int	ft_printf_x(va_list arg)
{
	long	l;
	char	*hexatable;

	hexatable = "0123456789abcdef";
	l = va_arg(arg, long);
	return (ft_hexarecursive(l, hexatable));
}

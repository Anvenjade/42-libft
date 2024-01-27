/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:38:55 by jfaure            #+#    #+#             */
/*   Updated: 2023/11/18 05:09:05 by jfaure           ###   ########.fr       */
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

int	ft_printf_p(va_list arg)
{
	void	*ptr;
	char	*hexatable;

	ptr = va_arg(arg, void *);
	hexatable = "0123456789abcdef";
	if (ptr)
		ft_putstr_fd("0x", 1);
	return (ft_hexarecursive((long)ptr, hexatable) + 2);
}

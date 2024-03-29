/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:31:37 by jfaure            #+#    #+#             */
/*   Updated: 2024/01/27 11:31:14 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	ft_printf_c(va_list arg)
{
	char	c;

	c = va_arg(arg, int);
	write(1, &c, 1);
	return (1);
}

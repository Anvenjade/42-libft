/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:31:32 by jfaure            #+#    #+#             */
/*   Updated: 2024/01/27 11:31:36 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	ft_printf_u(va_list arg)
{
	unsigned int	i;

	i = va_arg(arg, unsigned int);
	return (ft_putnbr_fd(i, 1));
}

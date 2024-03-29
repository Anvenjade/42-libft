/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:31 by jfaure            #+#    #+#             */
/*   Updated: 2024/01/27 11:31:31 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	ft_printf_s(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

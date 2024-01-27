/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:39:40 by jfaure            #+#    #+#             */
/*   Updated: 2023/11/18 05:08:15 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_printf_percent(va_list arg)
{
	char	c;

	c = '%';
	(void) arg;
	write(1, &c, 1);
	return (1);
}

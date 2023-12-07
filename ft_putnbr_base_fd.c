/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 06:11:06 by jfaure            #+#    #+#             */
/*   Updated: 2023/12/07 16:51:23 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(size_t l, const char *base, int fd)
{
	int	count;

	count = 0;
	if (l < 0)
	{
		l *= -1;
		ft_putchar_fd('-', fd);
		count++;
	}
	if (l > (ft_strlen(base) - 1))
	{
		count += ft_putnbr_base_fd(l / ft_strlen(base), base, fd);
	}
	ft_putchar_fd(base[l % ft_strlen(base)], fd);
	count++;
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:02:44 by jfaure            #+#    #+#             */
/*   Updated: 2023/11/20 17:40:11 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	(*g_ft_print_function_table[9])(va_list) = {
	ft_printf_c,
	ft_printf_d,
	ft_printf_i,
	ft_printf_p,
	ft_printf_percent,
	ft_printf_s,
	ft_printf_u,
	ft_printf_x,
	ft_printf_bigx
};

// Converts the character into an int for the function pointer table
static int	ft_printf_table_lookup(char c)
{
	if (c == 'c')
		return (0);
	if (c == 'd')
		return (1);
	if (c == 'i')
		return (2);
	if (c == 'p')
		return (3);
	if (c == '%')
		return (4);
	if (c == 's')
		return (5);
	if (c == 'u')
		return (6);
	if (c == 'x')
		return (7);
	if (c == 'X')
		return (8);
	return (-1);
}

static	void	ft_printf2(int (*func)(va_list), va_list arg, int *count)
{
	*count += func(arg);
}

static	void	ft_printf_actualprint(const char *format, va_list argptr,
										int *count, int *j)
{
	int		lookupresult;

	while (*j < (int)ft_strlen(format))
	{
		while (format[*j] != '%' && format[*j])
		{
			ft_putchar_fd(format[*j], 1);
			*count += 1;
			*j += 1;
		}
		lookupresult = ft_printf_table_lookup(format[*j + 1]);
		if (lookupresult != -1)
		{
			ft_printf2(g_ft_print_function_table[lookupresult], argptr, count);
			*j += 2;
			continue ;
		}
		else if (format[*j])
		{
			ft_putchar_fd(format[*j], 1);
			*count += 1;
		}
		*j += 1;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		count;
	int		j;

	count = 0;
	j = 0;
	va_start(argptr, format);
	ft_printf_actualprint(format, argptr, &count, &j);
	va_end(argptr);
	return (count);
}

// int	ft_printf(const char *format, ...)
// {
// 	va_list	argptr;
// 	int		i;
// 	int		j;
// 	int		count;
// 	int		lookupresult;

// 	va_start(argptr, format);
// 	i = -1;
// 	j = 0;
// 	count = 0;
// 	while (++i < (ft_count_args(format)))
// 	{
// 		while (format[j] != '%' && format[j])
// 		{
// 			ft_putchar_fd(format[j++], 1);
// 			count++;
// 		}
// 		lookupresult = ft_printf_table_lookup(format[1 + j++]);
// 		if (lookupresult != -1)
// 			ft_printf2(g_ft_print_function_table[lookupresult], argptr, &count);
// 		else
// 			ft_putchar_fd('%', 1);
// 		j++;
// 	}
// 	va_end(argptr);
// 	return (count);
// }
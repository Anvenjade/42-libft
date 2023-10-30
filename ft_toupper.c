/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:25:02 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/19 23:46:24 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int chartotest)
{
	if ((chartotest >= 'a' && chartotest <= 'z'))
		return (chartotest - 32);
	else
		return (chartotest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:20:43 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/19 22:33:04 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int chartotest)
{
	return ((chartotest >= 'A' && chartotest <= 'Z')
		|| (chartotest >= 'a' && chartotest <= 'z')
		|| (chartotest >= '0' && chartotest <= '9'));
}

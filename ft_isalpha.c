/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:11:15 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/19 22:37:24 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int chartotest)
{
	if ((chartotest >= 'A' && chartotest <= 'Z')
		|| (chartotest >= 'a' && chartotest <= 'z'))
		return (1);
	else
		return (0);
}

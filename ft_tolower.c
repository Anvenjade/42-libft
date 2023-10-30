/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaure <jfaure@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:28:36 by jfaure            #+#    #+#             */
/*   Updated: 2023/10/19 23:46:31 by jfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int chartotest)
{
	if ((chartotest >= 'A' && chartotest <= 'Z'))
		return (chartotest + 32);
	else
		return (chartotest);
}

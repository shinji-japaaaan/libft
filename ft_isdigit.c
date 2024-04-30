/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:06:21 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/23 08:25:33 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return (('0' <= c && c <= '9'));
}

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isdigit(c))
// 	{
// 		printf("%c is a digit.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", c);
// 	}
// 	return (0);
// }

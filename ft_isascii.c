/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:29:29 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/23 08:25:44 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isascii(c))
// 	{
// 		printf("%c is an ASCII character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not an ASCII character.\n", c);
// 	}
// 	return (0);
// }
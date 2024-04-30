/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:53:51 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/23 13:13:15 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

// #include <ctype.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'A';
// 	printf("converted character is %c\n", ft_tolower(c));
// 	printf("converted character is %c", tolower(c));
// 	return (0);
// }
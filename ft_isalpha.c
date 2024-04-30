/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:37:50 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/23 08:25:42 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	if (ft_isalpha(c))
// 	{
// 		printf("%c is an alphabet character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not an alphabet character.\n", c);
// 	}
// 	return (0);
// }

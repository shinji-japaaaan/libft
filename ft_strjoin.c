/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:24:55 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/30 10:32:00 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*cpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	char		*result;

	s1_len = 0;
	s2_len = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		s1_len = ft_strlen(s1);
	if (s2 != NULL)
		s2_len = ft_strlen(s2);
	result = (char *)malloc(s1_len + s2_len + 1);
	if (result == NULL)
		return (NULL);
	cpy(cpy(result, (char *)s1), (char *)s2);
	return (result);
}

// int main()
// {
// 	char s1[] = "Hello,";
// 	char s2[] = "world!";
// 	char *result = ft_strjoin(s1, s2);
// 	if (result != NULL) {
// 		printf("Concatenated string: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
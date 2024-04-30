/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:42:28 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/30 15:25:49 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	copy_string(const char *str, char *result, int start, size_t length)
{
	size_t	i;

	i = 0;
	while (str[start + i] != '\0' && i < length)
	{
		result[i] = str[start + i];
		i++;
	}
	result[i] = '\0';
}

char	*ft_substr(const char *str, unsigned int start, size_t length)
{
	size_t		slen;
	char		*result;

	if (str == NULL)
		return (NULL);
	slen = ft_strlen(str);
	if (slen <= start || length == 0)
	{
		result = (char *)malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	else if (start + length < slen)
		result = (char *)malloc(length + 1);
	else
		result = (char *)malloc(slen - start + 1);
	if (result == NULL)
		return (NULL);
	copy_string(str, result, start, length);
	return (result);
}

// int	main()
// {
// 	char *str = NULL;
// 	int	start = 0;
// 	int length = 12;

// 	char *result = ft_substr(str, start, length);
// 	if (result != NULL)
// 	{
// 		printf("substirng is %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("memory allocation is error");
// 	}
// 	return (0);
// }

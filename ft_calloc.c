/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:44:59 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/26 12:37:14 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	char	*ptr2;
	size_t	i;

	if (n > 0 && size > 0 && SIZE_MAX / size < n)
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ptr2 = (char *)ptr;
	i = 0;
	while (i < n * size)
	{
		ptr2[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main()
// {
// 	int	*array = (int *)ft_calloc(5, sizeof(int));
// 	int	*array2 = (int *)calloc(5, sizeof(int));
// 	int	i = 0;
// 	int	k = 0;

// 	printf("Initialized array elements: ");
// 	while (i < 5)
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);

// 	printf("Initialized array elements: ");
// 	while (k < 5)
// 	{
// 		printf("%d", array2[k]);
// 		k++;
// 	}
// 	printf("\n");
// 	free(array2);
// }
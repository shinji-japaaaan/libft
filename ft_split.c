/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:39:54 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/30 09:55:46 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_words(const char *s, char c)
{
	int	count;
	int	is_word;

	if (*s == '\0')
		return (0);
	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s == c)
			is_word = 0;
		else
		{
			if (is_word == 0)
			{
				count++;
				is_word = 1;
			}
		}
		s++;
	}
	return (count);
}

int	copy_word2(char	**result, const char *s, int index, int word_length)
{
	int	i;

	result[index] = (char *)malloc(word_length + 1);
	if (result[index] == NULL)
		return (0);
	i = 0;
	while (i < word_length)
	{
		result[index][i] = (s - word_length)[i];
		i++;
	}
	result[index][word_length] = '\0';
	return (1);
}

void	copy_word1(char **result, char const *s, char c)
{
	int	index;
	int	word_length;

	index = 0;
	word_length = 0;
	while (*s)
	{
		if (*s != c)
			word_length++;
		else if (word_length)
		{
			copy_word2(result, s, index++, word_length);
			word_length = 0;
		}
		s++;
	}
	if (word_length)
	{
		copy_word2(result, s, index, word_length);
		index++;
	}
	result[index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;

	if (s == NULL)
		return (NULL);
	count = 0;
	if (s != NULL)
		count = count_words(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	copy_word1(result, s, c);
	return (result);
}

// int	main()
// {
// 	char	*s = "\0";
// 	char	**result = ft_split(s, ',');
// 	if (result != NULL)
// 	{
// 		int	i;
// 		i = 0;
// 		while (result[i] != NULL)
// 		{
// 			printf("%s\n", result[i]);
// 			i++;
// 		}
// 		i =0;
// 		while (result[i] != NULL)
// 		{
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 		printf("Memory allocation failed");
// 	return (0);
// }

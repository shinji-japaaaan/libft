/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:20:46 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/30 10:24:17 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

void	del(void *content)
{
	free(content);
}

// int	main()
// {
// 	t_list *node = (t_list *)malloc(sizeof(t_list));
// 	int	*data = (int *)malloc(sizeof(int));
// 	if (!node || !data)
// 		return (0);
// 	*data = 42;
// 	node->content = data;
// 	node->next = NULL;
// 	ft_lstdelone(node, &del);
// 	node = NULL;
// 	if (node == NULL)
// 		printf("ノード削除完了\n");
// 	else
// 		printf("ノード削除失敗\n");
// 	return (0);
// }
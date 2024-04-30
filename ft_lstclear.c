/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:24:16 by sishizaw          #+#    #+#             */
/*   Updated: 2024/04/30 10:08:03 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*current;

// 	int	*data1 = (int *)malloc(sizeof(int));
// 	int	*data2 = (int *)malloc(sizeof(int));
// 	int	*data3 = (int *)malloc(sizeof(int));

// 	*data1 = 42;
// 	*data2 = 13;
// 	*data3 = 10;

// 	ft_lstadd_front(&lst, ft_lstnew(data1));
// 	ft_lstadd_front(&lst, ft_lstnew(data2));
// 	ft_lstadd_front(&lst, ft_lstnew(data3));

// 	current = lst;
// 	while (current != NULL)
// 	{
// 		printf("%d\n", *((int *)current->content));
// 		current = current->next;
// 	}
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("削除完了\n");
// 	return (0);
// }

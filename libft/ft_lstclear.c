/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:49:47 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 11:57:22 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone((*lst), del);
		*(lst) = temp;
	}
}

// #include <stdio.h>

// void    *del(void *content)
// {
//    free(content);
//     return 0;
// }

// int main(void)
// {
//     t_list *node1,*node2,*node3;
// 	node1 = (t_list *)malloc(sizeof(t_list));
//	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));

//	node1->content = ft_strdup("42istanbul");
// 	node2->content = ft_strdup("42istanbul");
// 	node3->content = ft_strdup("42istanbul");

// 	ft_lstadd_back(&node1,node2);
// 	ft_lstadd_back(&node1,node3);

// 	ft_lstclear(&node2,(void *)(*del));

// 	if(node2)
// 		printf("1\n");
// 	else
// 		printf("0\n");

// 	if(node1)
// 		printf("1\n");
// 	else
// 		printf("0\n");
// }

// lst struct yapısının bağlı olduğu tüm içerikleri ve yapıları temizler.
// lst struct'ına bağlı olan struct yapılarını temizlemez.
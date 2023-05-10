/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:51:16 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 12:02:48 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

//#include <stdio.h>

//int main()
//{
//	t_list *node1,*node2,*node3;

//	node1 = (t_list *)malloc(sizeof(t_list));
//	node2 = (t_list *)malloc(sizeof(t_list));
//	node3 = (t_list *)malloc(sizeof(t_list));

//	node1->next = node2;
//	node1->content = "dfsfsfsf";
//	node2->next = node3;
//	node3->next = NULL;

//	printf("%d", ft_lstsize(node1));
//}
//bağlı listeye kaç tane s_list yapısının olduğunu döndürür 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:48:59 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 17:22:05 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

//#include <stdio.h>

//int main()
//{
//	t_list *node1,*node2;	

//	node1 = ft_lstnew("42 ");
//	node2 = ft_lstnew("istanbul");

//	ft_lstadd_back(&node1, node2);

//	printf("%s", (char *)(node1->content));
//	printf("%s", (char *)(node1->next->content));
//}

//iki tane t_list alır ve ilk lst yapısın nextine 2. sini ekler
//ikincisinin next ine null atar
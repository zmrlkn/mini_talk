/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:49:31 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 11:56:07 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//#include <stdio.h>

//int main()
//{
//	t_list *node1,*node2;

//	node1 = ft_lstnew("selam");
//	node2 = ft_lstnew("jfksjfa");

//	ft_lstadd_front(&node1, node2);

//	printf("%s", (char *)node1->content);
//	printf("%s", (char *)node2->next->content);	
//}
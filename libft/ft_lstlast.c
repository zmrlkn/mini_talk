/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:50:33 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 12:04:05 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

//#include <stdio.h>

//int main()
//{	
//	t_list *node1,*node2,*node3;

//	node1 = (t_list *)malloc(sizeof(t_list));
//	node2 = (t_list *)malloc(sizeof(t_list));
//	node3 = (t_list *)malloc(sizeof(t_list));

//	node1->next = node2;
//	node2->next = node3;
//	node2->content = "selamdünya";
//	node3->next = NULL;
//	node3->content = "helloworld";

//	printf("%s",(char *)ft_lstlast(node1)->content);
//}

//lst sturct yapsının bağlı olduğu son struct yapısını döndürür.
//çıktı olarak helloworld vercektir. next inde null olan struct 
//yapısının contentinde yazanı döndürür.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:49:08 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/24 17:30:56 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

//#include <stdio.h>

//int main()
//{
//	printf("%s",(char *)ft_lstnew("zumra")->content);
//}

//fonksiyona girilen string için struct yapısıyla yeni bir t_list oluştururlur 
//contentine girilen string yazılır
//next ine null atanır
//oluşturulan struct return edilir.
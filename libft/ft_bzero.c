/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:41 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 17:19:02 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//#include <unistd.h>

//int main()
//{
//	char a[] = "42 istanbul";
//	ft_bzero(a, 3);
//	write(1, &a, 12);
//	return (0);
//}

//burada girilen stringe istenilen uzunlukta null ataması yapıyoruz
//write kullanmamızın sebebi printf te null görünce yazdırmaya devam etmemesi
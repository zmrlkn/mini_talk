/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:03 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/10 15:11:23 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dest)
		return (0);
	if (!n || src == dest)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

//#include <stdio.h>

//int main()
//{
//	char a[] = "sfflskdf";
//	char b[] = "fdhgd";
//	printf("%s\n", ft_memcpy(a, b, 5));
//	//printf("%s\n", (char *)ft_memcpy(a+2,a,5));//overlap durumu için
//	return(0);
//}

// "src" parametresi ile gösterilen bellek bölgesindeki karakterleri,
// "n" parametre değeri kadar uzunlukta, "dst" parametresindeki
// bellek bölgesine kopyalar.
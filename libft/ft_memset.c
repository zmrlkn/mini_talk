/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:12:35 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 12:08:02 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
		*ptr++ = c;
	return (b);
}

//#include <stdio.h>

//int	main()
//{

//	int dizi[] = {1,2,3,4,5};

//	ft_memset(&dizi, 0, 12);
//	printf("%d", dizi[0]);
//	printf("%d", dizi[1]);
//	printf("%d", dizi[2]);
//	printf("%d", dizi[3]);
//	return 0;
//}

// "c" parametresi ile gösterilen bellek bölgesindeki karakteri dest
// parametresindeki bellek bölgesinin ilk "n" parametre değeri kadar byte'ına
// kopyalar.
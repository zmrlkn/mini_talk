/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:03 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/17 13:23:56 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		ret;
	int		sign;

	sign = 1;
	ret = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
	{
		ret = (*str - 48) + (ret * 10);
		str++;
	}
	return (ret * sign);
}

//#include <stdio.h>

//int main()
//{
//	char a[] ="    -1235as23";
//	printf("%d\n", ft_atoi(a));
//	return(0);
//}

//atoi yani array to intager 
//char array olarak girdiğimiz stringteki space karakterleri atlar
//- veya + varsa - ise çıkan sonucu -1 ile çarpar , + ise öylece kalır
//0 9 arasındaki rakamları - 48 ile ascii tablosuna göre integare çevirir
//basamak sayısına göre ret * 10 ile çarpma işlemi yapılır 
//havuzdaki atoi den farklı olarak burada sadece 1 tane - veya + veriyoruz

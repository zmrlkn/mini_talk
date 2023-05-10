/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:03 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/24 17:25:08 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (*s)
			f(i++, s++);
	}
}

//void	f(unsigned int i, char *c)
//{
//	*c = *c - 12;
//}

//#include <stdio.h>
//int main()
//{
//	char	str[] = "istanbul";
//	ft_striteri(str, f);
//	printf("%s\n", str);
//}
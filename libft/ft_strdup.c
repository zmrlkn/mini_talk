/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:03 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/20 13:34:54 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;

	p = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}

/*
#include <stdio.h>
int main()
{
	char	s1[] = "42 istanbul";
	printf("%s\n", ft_strdup(s1));
}
*/

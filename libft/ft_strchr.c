/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:03 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 14:27:24 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			index;
	unsigned char	*pt;

	index = 0;
	pt = (unsigned char *)s;
	while (pt[index] != '\0')
	{
		if ((char) c == pt[index])
			return ((char *)pt + index);
		index++;
	}
	if ((char) c == '\0')
		return ((char *)pt + index);
	return (NULL);
}

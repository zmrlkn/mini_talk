/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:12:44 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 17:23:12 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write (fd, s++, 1);
		write (fd, "\n", 1);
	}
}

//#include <fcntl.h>

//int main()
//{
//	int fd = open("/Users/zalkan/Dekstop/test.txt", O_WRONLY | O_CREAT , 0777);
//	ft_putendl_fd("dfsfjslfsd", fd);
//}
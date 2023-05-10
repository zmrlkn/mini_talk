/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:03 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/15 12:36:34 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//#include <fcntl.h>
//int main()
//{
//	int fd = open("/Users/zalkan/Dekstop/test2.txt", O_WRONLY | O_CREAT , 0777);
//	ft_putchar_fd('a', fd);
//}
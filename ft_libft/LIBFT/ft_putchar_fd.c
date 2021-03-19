/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:20:44 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:14:22 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Writes char c to file descriptor fd.
*/

#include "libft.h"

int ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}

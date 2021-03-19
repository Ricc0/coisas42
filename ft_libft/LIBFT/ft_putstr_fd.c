/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:30:53 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:10:52 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


void ft_putstr_fd(char *s,int fd)
{
    int i;

    if( s != NULL)
    {
        i=0;
        while(s[i] != '\0')
        {
            write(fd, &s[i], 1);
            i++;
        }
    }
}


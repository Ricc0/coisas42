/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:30:53 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:14:34 by hdal-mol         ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	ft_putstr_fd("Tddae em k2 w \n", 1);
	ft_putstr_fd("Edsf32nio2 e 21 \n", 1);
	ft_putstr_fd("S13 -0oi 01i3 \n", 1);
	ft_putstr_fd("Tdaxdnj o-213\n", 1);
	ft_putstr_fd("\ndadsadddadsa\n", 1);

	return (0);
}
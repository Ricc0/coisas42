/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:08:45 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:09:38 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** LIBRARY: <string.h>
** SYNOPSIS: locate byte in byte string
**
** DESCRIPTION:
** 		The memchr() function locates the first occurrence of c (converted to an
**	unsigned char) in string s.
*/
#include "libft.h"

void *ft_memchr( const void * s, int c, size_t n)
{
    int i;

    i=0;

    while(i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
        {
            return((void *)(s + i ));
        }
        i++;
    }
        return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:09:48 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:13:23 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Apaga o conteudo até LENG bytes de memoria
começando no local apontado pela STR,
 escrevendo zeros (\0) nesse local
*/
#include "libft.h"

void        ft_bzero(void *str, size_t leng)
{
    int i;
    
    i = 0;

    while( i < leng)
    {
        ((char *)str) [i] = '\0';
        i++;
    }
}
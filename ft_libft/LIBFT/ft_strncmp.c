/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:38:24 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:24 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
** compara as  strings s1 and s2 char-wise, returning the difference.
*/
#include "libft.h"


int ft_strncmp(char *s1, char *s2, size_t n)
{
    int i;
 
    i = 0;
    while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
    {
        if(i < (n-1))
        {
            i++;
        }
        else 
            return(0);
    }
            return (s1[i] - s2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:17:03 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:37:07 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** enche a memoria com um byte constante
** Library: <string.h>
** completa ou substitui a str até o leng determinado
** com o byte constante c.
** Returns a pointer to the memory area s.
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t leng)
{
	size_t i;

	i = 0;
	while (i < leng)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}

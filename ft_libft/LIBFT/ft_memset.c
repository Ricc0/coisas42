/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:17:03 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:14:18 by hdal-mol         ###   ########.fr       */
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
	int i;

	i = 0;
	while (i < leng)
	{
		((char *)str)[i] = c;
		i++;
	}
}

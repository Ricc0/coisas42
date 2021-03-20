/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:09:57 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:39:01 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares n bytes after s1 with the n bytes after s2.
** If any are different it returns the difference.
*/
#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			i;

	aux1 = (unsigned char*)str1;
	aux2 = (unsigned char*)str2;
	i = 0;
	if (len == 0)
		return (0);
	while (*aux1 == *aux2 && ++i < len)
	{
		aux1++;
		aux2++;
	}
	return ((int)(*aux1 - *aux2));
}

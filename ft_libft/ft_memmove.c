/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:16:23 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:10:21 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *source_cast;
	unsigned char *destination_cast;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	if (src < dest)
	{
		source_cast = (unsigned char *)src + n - 1;
		destination_cast = (unsigned char *)dest + n - 1;
		while (n--)
		{
			*destination_cast = *source_cast;
			destination_cast--;
			source_cast--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

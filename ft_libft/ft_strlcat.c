/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:35:40 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:12:33 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenates src to destination, writing size bytes at most.
** Returns initial length of dest plus length of src for truncation detection.
*/

#include "libft.h"

char	ft_strlen(const char *n)
{
	int	cont;

	cont = 0;
	while (n[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t dest_leng;
	size_t i;

	dest_leng = ft_strlen(dest);
	i = 0;
	if (nb <= dest_leng)
		return (nb + ft_strlen(src));
	while (src[i] != '\0' && dest_leng + 1 < nb)
	{
		dest[dest_leng] = src[i];
		dest_leng++;
		i++;
	}
	dest[dest_leng] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

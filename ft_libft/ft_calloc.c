/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:09:43 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:08:17 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t leng)
{
	int i;

	i = 0;
	while (i < leng)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t times, size_t size)
{
	size_t	tamanho_total;
	void	*alocado;

	tamanho_total = times * size;
	alocado = malloc(tamanho_total);
	if (!(alocado))
		return (0);
	ft_bzero(alocado, tamanho_total);
	return (alocado);
}

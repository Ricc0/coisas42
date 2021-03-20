/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:09:43 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:33:20 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

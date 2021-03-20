/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:32:59 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:41:18 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates an allocated string with the same chars of s.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	tamanho_original;
	char	*nova_string;

	tamanho_original = ft_strlen(s1) + 1;
	nova_string = (char *)malloc(tamanho_original);
	if (!(nova_string))
		return (0);
	ft_memcpy(nova_string, s1, tamanho_original);
	return (nova_string);
}

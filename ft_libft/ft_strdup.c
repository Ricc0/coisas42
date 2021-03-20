/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:32:59 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:12:09 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates an allocated string with the same chars of s.
*/
#include "libft.h"

void	ft_memcpy(void *dest, void *src, size_t n)
{
	size_t i;

	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	i = 0;
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:41:07 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:52:44 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns last occurence of char c in string or NULL.
*/
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char		caracter;
	size_t		len;

	caracter = (char)c;
	len = ft_strlen((char*)str);
	while (len > 0)
	{
		if (*(str + len - 1) == c)
			return ((char*)(str + len - 1));
		else
			--len;
	}
	if (caracter == '\0')
	{
		len = ft_strlen((char*)str);
		return ((char*)(str + len));
	}
	return (NULL);
}

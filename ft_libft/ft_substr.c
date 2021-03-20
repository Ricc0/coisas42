/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:42:10 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:43:16 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nova_str;
	size_t	str;
	size_t	i;

	if (!s || !(nova_str = (char *)malloc(len + 1)))
		return (0);
	str = start;
	i = 0;
	while (str < ft_strlen(s) && i < len)
		nova_str[i++] = s[str++];
	nova_str[i] = '\0';
	return (nova_str);
}

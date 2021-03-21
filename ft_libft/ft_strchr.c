/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:31:46 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:11:41 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
**
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.  The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the func-
**	tions locate the terminating `\0'.
*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char		character;

	character = (char)c;
	while (*str != '\0')
	{
		if (*str == character)
			return ((char*)str);
		else
			++str;
	}
	if (character == '\0')
		return ((char*)str);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:36:09 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:54:49 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string copying
**
** DESCRIPTION:
** 		The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
** 		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
*/

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	char			current_char;
	size_t	i;

	if (src == 0)
		return (0);
	if (size > 0)
	{
		i = 0;
		current_char = src[i];
		while (current_char != '\0' && i < (size - 1))
		{
			dest[i] = current_char;
			i++;
			current_char = src[i];
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

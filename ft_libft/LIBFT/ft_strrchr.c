/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:41:07 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:15:51 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Returns last occurence of char c in string or NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
    {
		return ((char * )str);
    }
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char *s_end;

	s_end = ft_strchr(s, '\0');
	while (*s_end != (char)c)
    {
		if (s_end-- == s)
        {
			return (NULL);
        }

	return (char *)s_end;
    }
}

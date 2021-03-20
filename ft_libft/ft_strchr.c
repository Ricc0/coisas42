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

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char		caracter;

	caracter = (char)c;
	while (*str != '\0')
	{
		if (*str == caracter)
			return ((char*)str);
		else
			++str;
	}
	if (caracter == '\0')
		return ((char*)str);
	return (NULL);
}

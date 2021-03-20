/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:35:03 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:41:36 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: concatenate two strings into a new string (with malloc)
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a new string, which is the
**	result of the concatenation of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	len_str1;
	size_t	len_str2;
	char	*new_str;

	if (!str1 || !str2)
		return (NULL);
	len_str1 = ft_strlen(str1);
	len_str2 = ft_strlen(str2);
	new_str = malloc(sizeof(char) * (len_str1 + len_str2 + 1));
	if (new_str == NULL)
		return (NULL);
	while (*str1)
		*(new_str++) = *(str1++);
	while (*str2)
		*(new_str++) = *(str2++);
	*new_str = '\0';
	return (new_str - (len_str1 + len_str2));
}

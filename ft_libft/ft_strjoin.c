/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:35:03 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/21 11:25:01 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

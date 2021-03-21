/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:42:10 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/21 11:29:48 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:17:03 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/21 11:18:40 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t leng)
{
	size_t i;

	i = 0;
	while (i < leng)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}

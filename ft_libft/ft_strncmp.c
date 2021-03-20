/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henricco <henricco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:38:24 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/20 13:46:31 by henricco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** compara as  strings s1 and s2 char-wise, returning the difference.
*/
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		if (i < (n - 1))
		{
			i++;
		}
		else
			return (0);
	}
	return (s1[i] - s2[i]);
}

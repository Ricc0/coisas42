/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:42:10 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:37 by hdal-mol         ###   ########.fr       */
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

#include <stddef.h>//possibilitar size_t
#include <stdlib.h>// possibilitar malloc
#include "libft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char original_string[100] = "If money can't buy happiness then why is it so fabulous?";

	printf("%s\n", ft_substr(original_string, 1, 20));
	printf("----------\n");

	printf("%s\n", ft_substr(original_string, 1, 2));
	printf("----------\n");

	printf("%s\n", ft_substr(original_string, 100, 123));
	printf("----------\n");

	printf("%s\n", ft_substr(original_string, 0, 0));
	printf("----------\n");

	printf("%s\n", ft_substr(NULL, 2, 4));
	printf("----------\n");

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:35:03 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:01 by hdal-mol         ###   ########.fr       */
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

int		ft_strlen( char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *nova_string;
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if(!s1 || !s2 || !(nova_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
        return(0);
    while(s1[i] != '\0')
    {
        nova_string[i] = s1[i];
        i++;
    }
    while( s2[j] != '\0')
    {
        nova_string[i++] = s2[j++];
    }
    nova_string = '\0';
    return(nova_string);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%s\n", ft_strjoin("I like", " turtles!DSA@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("sda d e", " ds!da@ ds"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("d2", " turtles!1s|sda|@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("If money can't buy happiness", " then why is it so fabulous?"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("I like", " turtles\0!DSA@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("I like", ""));
	printf("----------\n");

	printf("%s\n", ft_strjoin("", " turtles\0!DSA@"));
	printf("----------\n");

	printf("%s\n", ft_strjoin("", ""));
	printf("----------\n");

	return (0);
}
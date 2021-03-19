/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:09:16 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/18 23:11:04 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** LIBRARY: <ctype.h>
** SYNOPSIS: printing character test (space character inclusive)
**
** DESCRIPTION:
** 		The isprint() function tests for any printing character, including space
**	(' ').
*/
#include "libft.h"

int ft_isprint(int c)
{
    if (c >= ' ' && c <= '~')
    {
        return(1);
    }
    else 
        return(0);
}

//#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", isprint('c'));
	printf("%d\n", ft_isprint('c'));
	printf("---------------\n");

	printf("%d\n", isprint('X'));
	printf("%d\n", ft_isprint('X'));
	printf("---------------\n");

	printf("%d\n", isprint('7'));
	printf("%d\n", ft_isprint('7'));
	printf("---------------\n");

	printf("%d\n", isprint('~'));
	printf("%d\n", ft_isprint('~'));
	printf("---------------\n");

	printf("%d\n", isprint('\15'));
	printf("%d\n", ft_isprint('\15'));
	printf("---------------\n");

	printf("%d\n", isprint('\10'));
	printf("%d\n", ft_isprint('\10'));
	printf("---------------\n");

	printf("%d\n", isprint('\30'));
	printf("%d\n", ft_isprint('\30'));
	printf("---------------\n");

	printf("%d\n", isprint('\0'));
	printf("%d\n", ft_isprint('\0'));
	printf("---------------\n");

	printf("%d\n", isprint('\30'));
	printf("%d\n", ft_isprint('\30'));
	printf("---------------\n");

	printf("%d\n", isprint('z'));
	printf("%d\n", ft_isprint('z'));
	printf("---------------\n");

	printf("%d\n", isprint('L'));
	printf("%d\n", ft_isprint('L'));
	printf("---------------\n");

	printf("%d\n", isprint('['));
	printf("%d\n", ft_isprint('['));
	printf("---------------\n");

	printf("%d\n", isprint('|'));
	printf("%d\n", ft_isprint('|'));
	printf("---------------\n");

	printf("%d\n", isprint('&'));
	printf("%d\n", ft_isprint('&'));
	printf("---------------\n");

	printf("%d\n", isprint('0'));
	printf("%d\n", ft_isprint('0'));
	printf("---------------\n");

	printf("%d\n", isprint('1'));
	printf("%d\n", ft_isprint('1'));
	printf("---------------\n");

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:38:11 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:20 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** LIBRARY: N/A
** SYNOPSIS: create new string from modifying string with specified function
**
** DESCRIPTION:
** 		Applies the function ’f’ to each character of the string ’s’ to create
**	a new string (with malloc(3)) resulting from successive applications of ’f’.
*/
#include <stddef.h>//possibilitar size_t
#include <stdlib.h>// possibilitar malloc
#include "libft.h"

void ft_memcpy( void *dest, void * src , size_t n)
{
    size_t i;

    if(dest == NULL && src == NULL)
    {
        return(dest);
    }

    i=0;

    while(n > i)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}

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


char	*ft_strdup(const char *s1)
{
	size_t	tamanho_original;
	char	*nova_string;

	tamanho_original = ft_strlen(s1) + 1;
	nova_string = (char *)malloc(tamanho_original); //= malloc((original_size) * sizeof(char)); ???
													//(char *) casting int --> char
	if (!(nova_string))//(nova_string == NULL)
		return (0);//pode ser NULL
	ft_memcpy(nova_string, s1, tamanho_original);
	return (nova_string);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	
	if (!s || !f || !(str = ft_strdup(s)))
		return (0);
	i = 0;
	str = ft_strdup(s);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char twice(unsigned int a, char b)
{
	a = 0;
	return (b * 2);
}

char product(unsigned int a, char b)
{
	return (a * b);
}

char squares(unsigned int a, char b)
{
	b = 0;
	return (a * a);
}

char alpha(unsigned int a, char b)
{
	b = 0;
	return (a + 'A');
}

int main(void)
{

	printf("%s|\n", ft_strmapi("123", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("   ", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("abcd", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi(" 1 23 ", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\t", &twice));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("123", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("   ", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("abcdkm knkn oj pin12 n1n o3", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi(" 1 23 ", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\t", &product));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("123", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("   ", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("abcd", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi(" 1 23 ", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\t", &alpha));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\tdsad 21eqw dsa12efzxc  223", &squares));
	printf("----------\n");
	printf("%s|\n", ft_strmapi("\n\n\tdsad 21eqw dsa12efzxc  223", &product));
	printf("----------\n");

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:32:59 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:14:48 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Creates an allocated string with the same chars of s.
*/
#include "libft.h"

#include <stddef.h>//possibilitar size_t
#include <stdlib.h>// possibilitar malloc
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


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char original_string[100] = "If money can't buy happiness then why is it so fabulous?";
	char *copy_pointer;

	copy_pointer = strdup(original_string);
	printf("%s\n", copy_pointer);
	printf("----------\n");
	copy_pointer = ft_strdup(original_string);
	printf("%s\n", copy_pointer);
	printf("----------\n");

	char *str = "Helloworld";
	copy_pointer = strdup(str);
	printf("%s\n", copy_pointer);
	printf("----------\n");
	copy_pointer = ft_strdup(str);
	printf("%s\n", copy_pointer);
	printf("----------\n");

	return (0);
}
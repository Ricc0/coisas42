/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:38:11 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 20:14:37 by hdal-mol         ###   ########.fr       */
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
	nova_string = (char *)malloc(tamanho_original); //= malloc((original_size) * sizeof(char)); ??? //(char *) casting int --> char
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

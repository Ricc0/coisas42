/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:35:40 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:10 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Concatenates src to destination, writing size bytes at most.
** Returns initial length of dest plus length of src for truncation detection.
*/
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"


char   ft_strlen(const char *n)
{
    int     cont;
 
    cont = 0;
    while (n[cont] != '\0')
    {
        cont++;
    }
    return (cont);
}
 
size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t dest_leng;
	size_t i;

	dest_leng = ft_strlen(dest);
	i = 0;
	
	if (nb <= dest_leng)
		return (nb + ft_strlen(src));
	while (src[i] != '\0' && dest_leng + 1 < nb)
	{
		dest[dest_leng] = src[i];
		dest_leng++;
		i++;
	}
	dest[dest_leng] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

 


int main(void)
{

	char stra1[1000], stra2[1000];
	strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 100);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 100);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 7);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 7);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 6);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 6);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	return 0;
}
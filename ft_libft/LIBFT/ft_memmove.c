/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:16:23 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/18 23:16:29 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
   size_t i;

   i =0;
    
	unsigned char *source_cast;
	unsigned char *destination_cast;

	 if (!dest && !src)
        return (0);
	if (src < dest)
	{
		source_cast = (unsigned char *)src + n - 1;
		destination_cast = (unsigned char *)dest + n - 1;
		while (n--)
		{
			*destination_cast = *source_cast;
			destination_cast--;
			source_cast--;
		}
	}
    else
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char dest1sys[] = "Aticleworld";
	const char src1sys[] = "Amlendra";
	printf("Before memmove >> dest1sys = %s, src1sys = %s\n\n", dest1sys, src1sys);
	memmove(dest1sys, src1sys, 5);
	printf("After memmove >> dest1sys = %s, src1sys = %s\n\n", dest1sys, src1sys);
	printf("---------------\n");

	char dest1ft[] = "Aticleworld";
	const char src1ft[] = "Amlendra";
	printf("Before memmove >> dest1ft = %s, src1ft = %s\n\n", dest1ft, src1ft);
	ft_memmove(dest1ft, src1ft, 5);
	printf("After memmove >> dest1ft = %s, src1ft = %s\n\n", dest1ft, src1ft);
	printf("---------------\n");

	char str1sys[50] = "I am going from Delhi to Gorakhpur";
	printf("Orignal :\t%s\n", str1sys);
	printf("Source:\t\t%s\n", str1sys + 5);
	printf("Destination:\t%s\n", str1sys + 11);
	memmove(str1sys + 11, str1sys + 5, 29);
	printf("Result:\t\t%s\n", str1sys);
	printf("Length:\t\t%lu characters\n\n", strlen(str1sys));
	printf("---------------\n");

	char str1ft[50] = "I am going from Delhi to Gorakhpur";
	printf("Orignal :\t%s\n", str1ft);
	printf("Source:\t\t%s\n", str1ft + 5);
	printf("Destination:\t%s\n", str1ft + 11);
	ft_memmove(str1ft + 11, str1ft + 5, 29);
	printf("Result:\t\t%s\n", str1ft);
	printf("Length:\t\t%lu characters\n\n", strlen(str1ft));
	printf("---------------\n");

	char dest4sys[] = "oldstring";
	const char src4sys[] = "newstring";
	printf("Before memmove dest4sys = %s, src4sys = %s\n", dest4sys, src4sys);
	memmove(dest4sys, src4sys, 9);
	printf("After memmove dest4sys = %s, src4sys = %s\n", dest4sys, src4sys);
	printf("---------------\n");

	char dest4ft[] = "oldstring";
	const char src4ft[] = "newstring";
	printf("Before memmove dest4ft = %s, src4ft = %s\n", dest4ft, src4ft);
	ft_memmove(dest4ft, src4ft, 9);
	printf("After memmove dest4ft = %s, src4ft = %s\n", dest4ft, src4ft);
	printf("---------------\n");

	return 0;
}
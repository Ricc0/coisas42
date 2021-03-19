/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:16:16 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/18 23:16:17 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** LIBRARY: <string.h>
** SYNOPSIS: copy memory area
**
** DESCRIPTION:
** 		The memcpy() function copies n bytes from memory area s2 to memory area
**	s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
**	s1 and s2 might overlap should use memmove(3) instead.
*/
#include "libft.h"

void        *ft_memcpy(void *dest, const void *src, size_t n);
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

//#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char src1sys[20] = "How Are you ?";
	char dst1sys[20] = {0};
	memcpy(dst1sys, src1sys, sizeof(src1sys));
	printf("dst1sys = %s\n", dst1sys);
	printf("---------------\n");

	char src1_ft[20] = "How Are you ?";
	char dst1_ft[20] = {0};
	ft_memcpy(dst1_ft, src1_ft, sizeof(src1_ft));
	printf("dst1_ft = %s\n", dst1_ft);
	printf("---------------\n");

	char csrcsys[] = "GeeksforGeeks";
	char cdestsys[100];
	memcpy(cdestsys, csrcsys, strlen(csrcsys) + 1);
	printf("Copied string is %s\n", cdestsys);
	printf("---------------\n");

	char csrc_ft[] = "GeeksforGeeks";
	char cdest_ft[100];
	memcpy(cdest_ft, csrc_ft, strlen(csrc_ft) + 1);
	printf("Copied string is %s\n", cdest_ft);
	printf("---------------\n");

	int i;

	int isrcsys[] = {10, 20, 30, 40, 50};
	int numsys = sizeof(isrcsys) / sizeof(isrcsys[0]);
	int idestsys[numsys];
	memcpy(idestsys, isrcsys, sizeof(isrcsys));
	printf("Copied array is ");
	for (i = 0; i < numsys; i++)
		printf("%d ", idestsys[i]);
	printf("\n---------------\n");

	int isrc_ft[] = {10, 20, 30, 40, 50};
	int num_ft = sizeof(isrc_ft) / sizeof(isrc_ft[0]);
	int idest_ft[num_ft];
	ft_memcpy(idest_ft, isrc_ft, sizeof(isrc_ft));
	printf("Copied array is ");
	for (i = 0; i < num_ft; i++)
		printf("%d ", idest_ft[i]);
	printf("\n---------------\n");

	return 0;
}


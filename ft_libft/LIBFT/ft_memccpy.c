/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:09:00 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/18 23:11:19 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy string until character found
**
** DESCRIPTION:
** 		The memccpy() function copies bytes from string s2 to string s1.  If the
**	character c (as converted to an unsigned char) occurs in the string s2,
**	the copy stops and a pointer to the byte after the copy of c in the
**	string s1 is returned.  Otherwise, n bytes are copied, and a NULL pointer
**	is returned.
*/

void *ft_memccpy(void *dest, const void *src, int c, size_t n)


{
	size_t i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dest + i + 1);
		i++;
	}
	return (0);
}
/**{
	unsigned char * fonte;
	unsigned char * destino;

	if(!dest && !src)
		return(0);

	fonte = (unsigned char *)src;
	destino = (unsigned *)dest;

	while(n--)
	{
		*destino = *fonte;
		destino++;
		fonte++;
	}
	return(dest);
}
**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char src1sys[20] = "How Are you ?";
	char dst1sys[20] = {0};
	memccpy(dst1sys, src1sys, 'o', sizeof(src1sys));
	printf("dst1sys = %s\n", dst1sys);
	printf("---------------\n");

	char src1_ft[20] = "How Are you ?";
	char dst1_ft[20] = {0};
	ft_memccpy(dst1_ft, src1_ft, 'o', sizeof(src1_ft));
	printf("dst1_ft = %s\n", dst1_ft);
	printf("---------------\n");

	char csrcsys[] = "GeeksforGeeks";
	char csys[100];
	memccpy(csys, csrcsys, 'o', strlen(csrcsys) + 1);
	printf("Copied string is %s\n", csys);
	printf("---------------\n");

	char csrc_ft[] = "GeeksforGeeks";
	char cdest_ft[100];
	memccpy(cdest_ft, csrc_ft, 'o', strlen(csrc_ft) + 1);
	printf("Copied string is %s\n", cdest_ft);
	printf("---------------\n");

	int i;

	int isrcsys[] = {10, 20, 30, 40, 50};
	int numsys = sizeof(isrcsys) / sizeof(isrcsys[0]);
	int idestsys[numsys];
	memccpy(idestsys, isrcsys, 'o', sizeof(isrcsys));
	printf("Copied array is ");
	for (i = 0; i < numsys; i++)
		printf("%d ", idestsys[i]);
	printf("\n---------------\n");

	int isrc_ft[] = {10, 20, 30, 40, 50};
	int num_ft = sizeof(isrc_ft) / sizeof(isrc_ft[0]);
	int idest_ft[num_ft];
	ft_memccpy(idest_ft, isrc_ft, 'o', sizeof(isrc_ft));
	printf("Copied array is ");
	for (i = 0; i < num_ft; i++)
		printf("%d ", idest_ft[i]);
	printf("\n---------------\n");

	return 0;
}
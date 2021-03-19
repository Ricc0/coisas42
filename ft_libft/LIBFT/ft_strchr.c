/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:31:46 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:14:39 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
	{

		str++;
		if (c == *str)
			return ((char * )str);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char string1[] = {"/home/test/sample"};

	printf("%s\n", strchr(string1, 't'));
	printf("%s\n", ft_strchr(string1, 't'));
	printf("---------------\n");

	printf("%s\n", strchr(string1, 'a'));
	printf("%s\n", ft_strchr(string1, 'a'));
	printf("---------------\n");

	printf("%s\n", strchr(string1, '\0'));
	printf("%s\n", ft_strchr(string1, '\0'));
	printf("---------------\n");

	printf("%s\n", strchr(string1, 'e'));
	printf("%s\n", ft_strchr(string1, 'e'));
	printf("---------------\n");

	return 0;
}

/*
char ft_strchr(char *str, int c)
{
	while(*str != '\0' && c != str)
	{
		str++;
	}
	if(*str == c)
	{
		return((char *)str);
	}
	return(0);
}







ft_strchr(char *str, int c)
{
	while(str != 0 && c != str)
	{
		str++;
		if(*str == c)
		{
			return((char*)str);
		}
	}	
	return(0);
}
*/
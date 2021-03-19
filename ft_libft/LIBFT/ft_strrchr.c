/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:41:07 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:30 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Returns last occurence of char c in string or NULL.
*/
#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
    {
		return ((char * )str);
    }
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char *s_end;

	s_end = ft_strchr(s, '\0');
	while (*s_end != (char)c)
    {
		if (s_end-- == s)
        {
			return (NULL);
        }

	return (char *)s_end;
    }
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char string1[] = {"/home/test/sample"};

	printf("%s\n", strrchr(string1, 't'));
	printf("%s\n", ft_strrchr(string1, 't'));
	printf("---------------\n");

	printf("%s\n", strrchr(string1, 'a'));
	printf("%s\n", ft_strrchr(string1, 'a'));
	printf("---------------\n");

	printf("%s\n", strrchr(string1, '\0'));
	printf("%s\n", ft_strrchr(string1, '\0'));
	printf("---------------\n");

	printf("%s\n", strrchr(string1, 'e'));
	printf("%s\n", ft_strrchr(string1, 'e'));
	printf("---------------\n");

	return 0;
}

ft_strchr.c(const char *str, int c )
{
	while(c != '\0' && c != *str)
	{
		str++;
	}
	if(str == c)
	{
		return((char *)str)
	}
	return(0);
}

ft_strrchr(const char * s, int c)
{
	char s_end;

	s_end = ft_strchr(s,'\0');
	while( s_end != c)
	{
		if(s_end-- == s)
		{
			return(0);
		}
		return(char *(s));
	}
}
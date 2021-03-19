/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:39:55 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:27 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string (size-bounded)
**
** DESCRIPTION:
** 		The strnstr() function locates the first occurrence of the null-termi-
**	nated string s2 in the string s1, where not more than n characters are
**	searched.  Characters that appear after a `\0' character are not
**	searched.
*/
#include <stddef.h>//possibilitar size_t
#include <stdlib.h>// possibilitar malloc
#include "libft.h"


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>


    int main(void)
{

	const char *hay1 = "Foo Bar Baz";
	const char *needle1 = "Bar";

	char *hay2 = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n stackdummy";
	char *needle2 = "stackdummy";

	//printf("%s\n", strnstr(hay1, needle1, 4));
	printf("%s\n", ft_strnstr(hay1, needle1, 4));
	printf("---------------\n");

	//printf("%s\n", strnstr(hay1, needle1, 10));
	printf("%s\n", ft_strnstr(hay1, needle1, 10));
	printf("---------------\n");

	//printf("%s\n", strnstr(hay1, needle1, 0));
	printf("%s\n", ft_strnstr(hay1, needle1, 0));
	printf("---------------\n");

	//printf("%s\n", strnstr(hay2, needle2, 10));
	printf("%s\n", ft_strnstr(hay2, needle2, 10));
	printf("---------------\n");

	//printf("%s\n", strnstr(hay2, needle2, 70));
	printf("%s\n", ft_strnstr(hay2, needle2, 70));
	printf("---------------\n");

	
	return 0;

}




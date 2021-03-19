/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdal-mol <hdal-mol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:41:56 by hdal-mol          #+#    #+#             */
/*   Updated: 2021/03/19 18:15:34 by hdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>//possibilitar size_t
#include <stdlib.h>// possibilitar malloc
#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while(*str != '\0' && c != *str)
    {
        str++;
        if(c == *str)
            return((char *)str);
    }
}

int        ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *nova_str;
    size_t    str;
    size_t    i;

    if (!s || !(nova_str = (char *)malloc(len + 1)))
        return (0);
    str = start;
    i = 0;
    while (str < ft_strlen(s) && i < len)
        nova_str[i++] = s[str++];
    nova_str[i] = '\0';
    return (nova_str);
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    
    if(!s1 || !set)
        return(0);

    while(*s1 && ft_strchr(set,*s1))
        s1++;
    i = ft_strlen(s1);
    while(i && ft_strchr(set, s1[i]))
        i--;
    return(ft_substr(s1,0,i+1));
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%s\n", ft_strtrim("If money can't buy happiness", " If "));
	printf("----------\n");

	printf("%s\n", ft_strtrim(" - If money can't buy happiness", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness - ", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim(" - If money can't buy happiness - ", " - "));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "If money"));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "If mone"));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "If money "));
	printf("----------\n");

	printf("%s\n", ft_strtrim("If money can't buy happiness", "y happiness"));
	printf("----------\n");

	return (0);
}
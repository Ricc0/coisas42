//#include "libft.h"

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("%lu\n", ft_strlen("1234"));
	printf("%lu\n", strlen("1234"));
	printf("--------------\n");

	printf("%lu\n", ft_strlen(""));
	printf("%lu\n", strlen(""));
	printf("--------------\n");

	printf("%lu\n", ft_strlen(" "));
	printf("%lu\n", strlen(" "));
	printf("--------------\n");

	printf("%lu\n", ft_strlen("\0"));
	printf("%lu\n", strlen("\0"));
	printf("--------------\n");

	return (0);
}
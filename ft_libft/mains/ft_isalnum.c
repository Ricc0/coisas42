#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", isalnum('c'));
	printf("%d\n", ft_isalnum('c'));
	printf("---------------\n");

	printf("%d\n", isalnum('X'));
	printf("%d\n", ft_isalnum('X'));
	printf("---------------\n");

	printf("%d\n", isalnum('7'));
	printf("%d\n", ft_isalnum('7'));
	printf("---------------\n");

	printf("%d\n", isalnum('\0'));
	printf("%d\n", ft_isalnum('\0'));
	printf("---------------\n");

	printf("%d\n", isalnum('\30'));
	printf("%d\n", ft_isalnum('\30'));
	printf("---------------\n");

	printf("%d\n", isalnum('z'));
	printf("%d\n", ft_isalnum('z'));
	printf("---------------\n");

	printf("%d\n", isalnum('L'));
	printf("%d\n", ft_isalnum('L'));
	printf("---------------\n");

	printf("%d\n", isalnum('['));
	printf("%d\n", ft_isalnum('['));
	printf("---------------\n");

	printf("%d\n", isalnum('|'));
	printf("%d\n", ft_isalnum('|'));
	printf("---------------\n");

	printf("%d\n", isalnum('&'));
	printf("%d\n", ft_isalnum('&'));
	printf("---------------\n");

	printf("%d\n", isalnum('0'));
	printf("%d\n", ft_isalnum('0'));
	printf("---------------\n");

	printf("%d\n", isalnum('1'));
	printf("%d\n", ft_isalnum('1'));
	printf("---------------\n");

	return 0;
}
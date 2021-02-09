#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", isalpha('c'));
	printf("%d\n", ft_isalpha('c'));
	printf("---------------\n");

	printf("%d\n", isalpha('X'));
	printf("%d\n", ft_isalpha('X'));
	printf("---------------\n");

	printf("%d\n", isalpha('7'));
	printf("%d\n", ft_isalpha('7'));
	printf("---------------\n");

	printf("%d\n", isalpha('\0'));
	printf("%d\n", ft_isalpha('\0'));
	printf("---------------\n");

	printf("%d\n", isalpha('\30'));
	printf("%d\n", ft_isalpha('\30'));
	printf("---------------\n");

	printf("%d\n", isalpha('z'));
	printf("%d\n", ft_isalpha('z'));
	printf("---------------\n");

	printf("%d\n", isalpha('L'));
	printf("%d\n", ft_isalpha('L'));
	printf("---------------\n");

	printf("%d\n", isalpha('['));
	printf("%d\n", ft_isalpha('['));
	printf("---------------\n");

	printf("%d\n", isalpha('|'));
	printf("%d\n", ft_isalpha('|'));
	printf("---------------\n");

	printf("%d\n", isalpha('&'));
	printf("%d\n", ft_isalpha('&'));
	printf("---------------\n");

	printf("%d\n", isalpha('0'));
	printf("%d\n", ft_isalpha('0'));
	printf("---------------\n");

	printf("%d\n", isalpha('1'));
	printf("%d\n", ft_isalpha('1'));
	printf("---------------\n");

	return 0;
}
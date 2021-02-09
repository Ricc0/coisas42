#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	printf("%d\n", isdigit('c'));
	printf("%d\n", ft_isdigit('c'));
	printf("---------------\n");

	printf("%d\n", isdigit('X'));
	printf("%d\n", ft_isdigit('X'));
	printf("---------------\n");

	printf("%d\n", isdigit('7'));
	printf("%d\n", ft_isdigit('7'));
	printf("---------------\n");

	printf("%d\n", isdigit('\0'));
	printf("%d\n", ft_isdigit('\0'));
	printf("---------------\n");

	printf("%d\n", isdigit('\30'));
	printf("%d\n", ft_isdigit('\30'));
	printf("---------------\n");

	printf("%d\n", isdigit('z'));
	printf("%d\n", ft_isdigit('z'));
	printf("---------------\n");

	printf("%d\n", isdigit('L'));
	printf("%d\n", ft_isdigit('L'));
	printf("---------------\n");

	printf("%d\n", isdigit('['));
	printf("%d\n", ft_isdigit('['));
	printf("---------------\n");

	printf("%d\n", isdigit('|'));
	printf("%d\n", ft_isdigit('|'));
	printf("---------------\n");

	printf("%d\n", isdigit('&'));
	printf("%d\n", ft_isdigit('&'));
	printf("---------------\n");

	printf("%d\n", isdigit('0'));
	printf("%d\n", ft_isdigit('0'));
	printf("---------------\n");

	printf("%d\n", isdigit('1'));
	printf("%d\n", ft_isdigit('1'));
	printf("---------------\n");

	return 0;
}
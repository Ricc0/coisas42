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
#include <unistd.h>
ft_swap(int *a, int *b)
{
	int save;

	save= *a;
	*a = *b;
	 *b= save;
}

#include <stdio.h>

int		main(void)
{
	int *a;
	int *b;
	int c = 13;
	int d = 29;

	a = &c;
	b = &d;
	printf("Endereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
	ft_swap(a, b);
	printf("\nEndereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
}


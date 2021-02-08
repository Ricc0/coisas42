void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

}

#include <stdio.h>


int main(void)
{
	int a = 10;
	int b = 2;
	int div1 = 10;
	int mod1 = 2;

	int *div = &div1;
	int *mod = &mod1;

	printf("Endereço Div = %p\n", div);
	printf("Valor Div = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod = %d\n", *mod);

	ft_div_mod(a, b, div, mod);

	printf("\nEndereço Div = %p\n", div);
	printf("Valor Div = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod = %d\n", *mod);
}


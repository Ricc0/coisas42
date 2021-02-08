#include <unistd.h>


void  ft_ultimate_ft(int *********nbr)
{
    
    *********nbr=42;
}

#include <stdio.h>
void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int *********nbr;
	int ********nbr1;
	int *******nbr2;
	int ******nbr3;
	int *****nbr4;
	int ****nbr5;
	int ***nbr6;
	int **nbr7;
	int *nbr8;
	int a = 10;
	nbr8 = &a;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	printf("Endereço Antes %p:\n ", nbr);
	printf("Valor Antes %d:\n ", *********nbr);

	ft_ultimate_ft(nbr);

	printf("Endereço Depois %p:\n ", nbr);
	printf("Valor Depois %d:\n ", *********nbr);
}

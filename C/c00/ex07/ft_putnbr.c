#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;
    int  unidade;
    unsigned int numero;
    unsigned int numero_copia;

    if(nb < 0)
    {
        numero = nb * -1;
        write(1,"-",1);
    }
    else
    {
        numero = nb;
    }

    unidade = 1;
    numero_copia = numero;

    while((numero_copia /= 10) > 0)
    {
        unidade *= 10;
    }

    while(unidade > 0)
    {
        c = (numero / unidade) + '0';
        write(1,&c,1);
        numero %= unidade;
        unidade /= 10;
    }
    
}


int        main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-1500);
    write(1, "\n", 1);
}


#include <unistd.h>
 
void                ft_putnbr_fd(int nb,int fd)
{
    char            c;
    int             unidade;
    unsigned int    number;
    unsigned int    number_copy;
 
    if (nb < 0)
    {
        number = nb * -1;
        write(fd, "-", 1);
    }
    else
        number = nb;
    unidade = 1;
    number_copy = number;
    while ((number_copy /= 10) > 0)
        unidade *= 10;
    while (unidade > 0)
    {
        c = (number / unidade) + '0';
        write(fd, &c, 1);
        number = number % unidade;
        unidade /= 10;
    }
}


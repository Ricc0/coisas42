 //PRINTAR NUMEROS IDEPENDENTE DO Q TIVER NA FRENTE
int         white_space(char c);
 
int         ft_atoi(char *str)
{
    unsigned int    i;
    unsigned int    neg;
    int             number;
 
    i = 0;
    neg = 0;
    number = 0;
    while (white_space(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg++;
        i++;
    }
    while (white_space(str[i]))
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        number *= 10;
        number += str[i] - '0';
        i++;
    }
    if (neg % 2 != 0)
        number *= -1;
    return (number);
}
 
int         white_space(char c)
{
    if (c == '\f' || c == '\n'|| c == '\r' ||
     c == '\t' || c == '\v' || c == ' ')
    {
        return (1);
    }
    return (0);
}
 
#include <stdio.h>
 
int            ft_atoi(char *str);
 
int            main(void)
{
    printf("%i\n", ft_atoi("-2147483648"));
    printf("%i\n", ft_atoi("    ----+-98ativo23"));
    printf("%i\n", ft_atoi("\n\t\f   --13positivo"));
    printf("%i\n", ft_atoi("banana"));
    printf("%i\n", ft_atoi("    "));
    printf("%i\n", ft_atoi("1666 5 7ui00"));
    printf("%i\n", ft_atoi("\n---++ 32    "));
    
}


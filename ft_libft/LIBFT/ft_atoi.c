 //PRINTAR NUMEROS IDEPENDENTE DO Q TIVER NA FRENTE
 /*
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
*/

int		ft_atoi(const char *str)
{
	int i;
	int s;
	int res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", atoi("-123"));
	printf("--------\n");
	printf("%d\n", ft_atoi("98993489"));
	printf("%d\n", atoi("98993489"));
	printf("--------\n");

	printf("%d\n", ft_atoi("--2147483648"));
	printf("%d\n", atoi("--2147483648"));
	printf("--------\n");
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("--------\n");

	printf("%d\n", ft_atoi("tutorialspoint.com"));
	printf("%d\n", atoi("tutorialspoint.com"));
	printf("--------\n");

	printf("%d\n", ft_atoi("  \t\r--451"));
	printf("%d\n", atoi("  \t\r--451"));
	printf("--------\n");
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	printf("%d\n", atoi("  ---+--+1234ab567"));
	printf("--------\n");
	printf("%d\n", ft_atoi("  ---+--+--+6451-1ab567"));
	printf("%d\n", atoi("  ---+--+--+6451-1ab567"));
	printf("--------\n");
	
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("--------\n");

    printf("%i\n", ft_atoi("    ----+-98ativo23"));
	printf("%d\n", atoi("    ----+-98ativo23"));
	printf("--------\n");

    
    
	return (0);
}


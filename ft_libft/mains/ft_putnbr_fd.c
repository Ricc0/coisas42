//#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

	ft_putnbr_fd(1234, 1);
    write(1,"\n",1);
	printf("---------------\n");

	ft_putnbr_fd(-1234, 1);
    write(1,"\n",1);
	printf("---------------\n");

	ft_putnbr_fd(131234, 1);
    write(1,"\n",1);
	printf("---------------\n");

	ft_putnbr_fd(-1234, 1);
    write(1,"\n",1);
	printf("---------------\n");

	ft_putnbr_fd(99999, 1);
	

	return (0);
}
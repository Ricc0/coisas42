#include<unistd.h>

void	ft_print_alphabet(void)
{
	int alf;
	alf = 97;
	while(alf <= 122)
	{
		write(1,&alf,1);
		alf++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return(0);
}

#include<unistd.h>

void aff_c(char *str)
{
	char c;
	c = 'c';
	if(1>0)
	{
		write(1,&c,1);
		write(1,&"\n",1);
	}
}

int main(void)
{
	aff_c();

	return(0);
}


